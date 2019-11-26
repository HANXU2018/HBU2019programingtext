#include<iostream>
using namespace std;
int a,b,c,n,zhan[100005];//a判断局数，b读入的个数，c栈的大小 
int legal(){//判断是否合法 
	int top=0,flag=1,next=1;//top栈的位置，flag是否合法，next等待出栈的数 
	for(int i=0;i<b;i++){//读数 
		cin>>n;//给你入栈的顺序
        if(n==next)next++;//相等直接出去 
		else zhan[top++]=n;
        while(top>0&&zhan[top-1]==next&&){//相等请出栈 
            top--;
            next++;//等待出栈的数变成下一个 
        }if(top>c||next>b+1||(top>2&&zhan[top-1]>zhan[top-2]))flag=0;
	}if(top>0)falg=0;
	return flag;
}
int main(){
	cin>>b>>c>>a;//a判断局数，b读入的个数，c栈的大小 
	for(int i=0;i<a;i++)cout<<(legal()?"YES":"NO")<<endl;
	return 0;
}
