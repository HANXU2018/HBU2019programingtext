#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct Node *PtrToNode;
struct Node {
    ElementType Data; /* 存储结点数据 */
    PtrToNode   Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

List ReadInput(); /* 裁判实现，细节不表 */
void PrintList( List L ); /* 裁判实现，细节不表 */
void K_Reverse( List L, int K );

int main()
{
    List L;
    int K=3;

    L = ReadInput();
    //scanf("%d", &K);
    //K_Reverse( L, K );
    L=L->Next;
    while(L!=NULL){
    	printf("%d\n",L->Data);
    	L=L->Next;
	}

    return 0;
}
List ReadInput(){
	List L=(List)malloc(sizeof(struct Node));
	L->Next=(List)malloc(sizeof(struct Node));
	List l=L->Next;
	int num=1;
	while(num!=10){
		l->Data=num;
		num++;
		if(num!=10)l->Next=(List)malloc(sizeof(struct Node));
		else{
			l->Next=NULL;
		}
		l=l->Next;
	}
	return L;
}
void K_Reverse( List L, int K )
{
    List head=L,point=L->Next,temp=L,p=L->Next,pp=p;
    int count=0;
    while(head->Next!=NULL) {
        count++;
        head=head->Next;
    }head=L;
    //printf("count==%d\n",count);
    count=count/K;
    //printf("count==%d\n",count);
    while(count-->0){
        temp->Next=point;
        int i=1;
		for(i=1;i<=K;i++){
            pp=p->Next;
            p->Next =temp->Next;
            
            temp->Next=p;
		//	printf("temp==%d p==%d ,p->next %d \n",temp->Data,p->Data,p->Next->Data);
            p=pp;
        }
        temp=point->Next;
        point=point->Next->Next;
        //printf("temp==%d p==%d ,p->next %d \n",temp->Data,p->Data,p->Next->Data);
    }
    
    point->Next->Next=p;
      // printf("temp==%d p==%d ,p->next %d \n",temp->Data,p->Data,p->Next->Data);
    L=head;
    
}
