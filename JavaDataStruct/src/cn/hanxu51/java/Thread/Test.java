package cn.hanxu51.java.Thread;

class A{
    public void c(){
        System.out.println("AC");
    }
}
class B extends  A{
    @Override
    public void c(){
        System.out.println("BC");
    }
}
public class Test {
    public static void main(String[] args) {
        B b = new B();
        b.c();
    }
}
