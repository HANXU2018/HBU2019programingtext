#include<iostream>
using namespace std;
int a,b,c,num[100005],zhan[100005];
int legal(){
	int top=0,flag=1,next=1;
	zhan[0]=0;
	for(int i=0;i<b;i++){
		cin>>num[i];
		if(flag){
			while(zhan[top]<num[i]){
				zhan[++top]=next++;
			}if(top<=c && zhan[top]==num[i])top--; 
			else flag=0;
		}
	}
	return flag;
}
int main(){
	cin>>b>>c>>a;
	for(int i=0;i<a;i++)//cout<<(legal()?"YES":"NO")<<endl;
		if(legal())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	return 0;
}
