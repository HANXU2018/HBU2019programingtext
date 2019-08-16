#include<iostream>
#include<cmath>
using namespace std;
bool isprime(long long int p){
	for(long long int i=1;i<=sqrt(p)+1; i=i+2){
		if(p%i==0){
			return false;
		}
	}
	return true;
	 
}
int main(){
	long long int f;
	cin>>f;
	if(f==4){
		printf("4 = 2 + 2");	
	}else{
	for(long long int i=1;i<=f/2+1;i=i+2){
		if(isprime(i)&&isprime(f-i)){
			printf("%lld = %lld + %lld",f,i,f-i);
			return 0;
			}	
		}
	
	return 0;
}
