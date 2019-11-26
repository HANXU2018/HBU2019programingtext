#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* ϸ���ڴ˲��� */
void Print( List L ); /* ϸ���ڴ˲��� */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}

List Insert( List L, ElementType X ){
    List p=L,s;
    s=(List*)malloc(sizeof(List*));
    s->Data=X;
    s->Next=NULL;
    while(p->Next&&p->Next>X){
        p=p->Next;
    }if(L==NULL){
        return s;
    }
    s->Next=p->Next;
    p->Next=s;
    return L;
}
