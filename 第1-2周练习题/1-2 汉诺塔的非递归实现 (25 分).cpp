#include<iostream>
using namespace std;
int hannuo(int n,char a,char c,char b){//n¸ö´Óaµ½c½èÖúb 
	if(n==1){
		cout<<a<<" -> "<<c<<endl;
	}else{
	hannuo(n-1,a,b,c);
	hannuo(1,a,c,b);
	hannuo(n-1,b,c,a);
}
}
int main(){
	int n;
	cin>>n;
	hannuo(n,'a','c','b');
	return 0;
}
