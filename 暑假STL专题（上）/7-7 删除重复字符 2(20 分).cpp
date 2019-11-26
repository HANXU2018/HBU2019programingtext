#include<iostream>
using namespace std;
int cha[300];
int main(){
	char c;
	c=getchar();
	while(c!='\n'){
		cha[c]=1;
			c=getchar();
	}
	for(int i=0;i<128;i++){
		if(cha[i]>0){
			printf("%c",i);
		}
	}
	return 0;
}
