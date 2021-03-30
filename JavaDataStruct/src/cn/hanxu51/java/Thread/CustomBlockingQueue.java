package cn.hanxu51.java.Thread;

import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.ReentrantLock;

/**
 * Created by chengc on 2018/8/15.
 * 其实BlockingQueue简单来说就是一个put锁，一个take锁，还有一个放入的元素形成的Node队列
 * 1.offer
 * 拿到锁的线程就把元素放入队列尾部，并释放锁；
 * 最后唤醒（调用LockSupport.unpark）一个等待时间最长的take线程（在takeCondition队列内），将其移入take锁的队列中
 *
 * 2.take
 * 拿到锁的线程，先判断元素个数是否为0 ，如果为0就在takeCondition上await（其实就是LockSupport.park来阻塞）。
 * 直到offer线程唤醒，就能从队列中拿出元素，释放take锁并返回拿到的元素
 */
public class CustomBlockingQueue<E> {
    private final int capacity;
    private final AtomicInteger count = new AtomicInteger();

    static class Node<E>{
        E item;
        Node<E> next;

        Node(E x){
            item = x;
        }
    }
    private Node<E> head;
    private Node<E> last;
    private final ReentrantLock putLock = new ReentrantLock();
    private final ReentrantLock takeLock = new ReentrantLock();
    private final Condition takeCondition = takeLock.newCondition();

    public CustomBlockingQueue(){
        this(Integer.MAX_VALUE);
    }
    public CustomBlockingQueue(int capacity){
        this.capacity = capacity;
        last = head = new Node<E>(null);
    }

    public int size(){
        return this.count.get();
    }

    public boolean offer(E item){
        final AtomicInteger tmpCount = this.count;
        putLock.lock();
        if(tmpCount.get() >= this.capacity){
            return false;
        }
        this.enqueue(new Node<E>(item));
        tmpCount.incrementAndGet();
        putLock.unlock();
        this.signalTake();
        return true;
    }

    public E take() throws InterruptedException {
        final AtomicInteger tmpCount = this.count;
        takeLock.lock();
        while(tmpCount.get() == 0){
            takeCondition.await();
        }
        E result = this.dequeue();
        tmpCount.decrementAndGet();
        takeLock.unlock();
        return result;
    }

    private void signalTake(){
        this.takeLock.lock();
        this.takeCondition.signal();
        this.takeLock.unlock();
    }


    private void enqueue(Node<E> item){
        last.next = item;
        last = last.next;
    }

    private E dequeue(){
        Node<E> firstDataNode = head.next;
        head.next = null;
        head = firstDataNode;
        E result = firstDataNode.item;
        firstDataNode.item = null;
        return result;
    }
}
