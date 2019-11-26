#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int result=0,thissum=0,N,digit,begin=0,end=0,b,e;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&digit);
        if(thissum==0){
        	begin=digit;
		}
        thissum+=digit;
        if(thissum>result){
			
            result=thissum;
            b=begin;
            e=digit;
            //cout<<b<<" "<<e<<" "<<result<<" "<<thissum<<endl; 
    	}
		if(thissum<0) {
        	thissum=0;
			
		}  
    }
    printf("%d %d %d",result,b,e);
    return 0;
}
