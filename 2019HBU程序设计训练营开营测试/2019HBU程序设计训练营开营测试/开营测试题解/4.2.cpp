#include<iostream>
using namespace std;
int main(){
	int a[300]={0};
	char c=getchar();
	while(c!='\n'){
		a[c]=1;
		c=getchar();
	}
	for(int i=0;i<300;i++){
		if(a[i]==1){
			printf("%c",i);
		}
	}
	return 0;
}