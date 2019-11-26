#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(b==0){
		printf("%d/%d=Error",a,b,1.0*a/b);
		
		
	}else if(b>0){
		printf("%d/%d=%.2f",a,b,1.0*a/b);
	}
	else{
		printf("%d/(%d)=%.2f",a,b,1.0*a/b);
	}
	return 0;
} 
