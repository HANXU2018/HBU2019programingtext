#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *reverse( struct ListNode *head );
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode  *head;

    head = createlist();
    head = reverse(head);
    printlist(head);
	
    return 0;
}

struct ListNode *reverse( struct ListNode *head )
{
struct ListNode *ptr=NULL,*ptr1=NULL;
while(head!=NULL)
{
ptr=(struct ListNode *)malloc(sizeof(struct ListNode));
ptr->data=head->data;
ptr->next=ptr1;
ptr1=ptr;
head=head->next;
}
return ptr;
}
