#include<iostream>
#include<vector>
using namespace std;
int num[999999];
int len=0;
int a,b,n;
int flag=1;
void push(int a){
	//cout<<a<<endl;
	string t = to_string(a);
	//cout<<t<<endl;
	for(int i=0;i<t.size();i++){
		num[len++]=t[i]-'0';
	}
	if(len>n){
		flag=0;
	}
	return ;
}
void out(){
	for(int i=0;i<n;i++){
		if(i>0)cout<<" ";
		cout<<num[i];
	}
}
int main(){
	cin>>a>>b>>n;
	push(a);
	push(b);
	int count = 0;
	while(flag){
		push(num[count]*num[count+1]);
		count++;
	}
	out();
	return 0;
} 
