#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *lift,*right;
};
struct node *creat(int *a,int *b,int n){//a后序,b中序 
	struct node *root;
	root=(struct node *)malloc(sizeof(struct node));
	if(n<=0){return NULL;
	}root->data=a[n-1];//后序遍历最后都是根节点。
	int i;
	for(i=0;i<n;i++){
		if(b[i]==a[n-1])
		break;
	} 
	root->lift=creat(a,b,i);
	root->right=creat(a+i,b+i+1,n-i-1);
	return root;
}
int flag=1;
void cengxu(struct node*L){
	struct node *p[1001];
	int in=0,out=0;
	p[in++]=L;
	while(in>out){
		if(p[out]!=0){
			if(flag){
				printf("%d",p[out]->data);
				flag=0;
			}else{
				printf(" %d",p[out]->data);
			}
		p[in++]=p[out]->lift;
		p[in++]=p[out]->right;
		}
		out++;
	}
}
int main(){
	struct node *tre;
	tre=(struct node *)malloc(sizeof(struct node));
	int a[30],b[30];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	tre=creat(a,b,n);
	cengxu(tre);
	return 0;
} 
