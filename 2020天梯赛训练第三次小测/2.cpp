#include<iostream>
using namespace std;
int main(){
	int flag=0;
	int a,b;
	while(cin>>a>>b){
		if(b!=0){
		if(flag==1){
			printf(" ");
		}
		flag=1;
			cout<<a*b<<" "<<b-1;
		}
	}
    if(flag==0){
printf("0 0");
    }
	return 0;
}
