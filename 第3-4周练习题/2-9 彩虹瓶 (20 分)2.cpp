#include<iostream>
using namespace std;
int a,b,c,n,zhan[100005];//a�жϾ�����b����ĸ�����cջ�Ĵ�С 
int legal(){//�ж��Ƿ�Ϸ� 
	int top=0,flag=1,next=1;//topջ��λ�ã�flag�Ƿ�Ϸ���next�ȴ���ջ���� 
	for(int i=0;i<b;i++){//���� 
		cin>>n;//������ջ��˳��
        if(n==next)next++;//���ֱ�ӳ�ȥ 
		else zhan[top++]=n;
        while(top>0&&zhan[top-1]==next&&){//������ջ 
            top--;
            next++;//�ȴ���ջ���������һ�� 
        }if(top>c||next>b+1||(top>2&&zhan[top-1]>zhan[top-2]))flag=0;
	}if(top>0)falg=0;
	return flag;
}
int main(){
	cin>>b>>c>>a;//a�жϾ�����b����ĸ�����cջ�Ĵ�С 
	for(int i=0;i<a;i++)cout<<(legal()?"YES":"NO")<<endl;
	return 0;
}
