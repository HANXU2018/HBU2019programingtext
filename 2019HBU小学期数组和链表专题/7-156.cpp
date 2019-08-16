#include<stdio.h>
#define M 100
int s[M];
int main(){
	for(int i=2;i<M;i++){
		for(int l=2;l*i<M;l++){
			if(l*i%2!=0){
					s[l*i/2]=1;
			}
		}
	}
	return 0;
}
