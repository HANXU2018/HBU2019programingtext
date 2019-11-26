#include<iostream>
using namespace std;
int gongyue(int a,int b){
	for(int i=2;i<a;i++){
		if(a%i==0&&b%i==0){
			return 1;
		}
	}
	return 0;
}
int main(){
	int a,b,c,d,e,flag=0;
	scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&e);
	for(int i=1;i<e;i++){
		if(gongyue(i,e)){
			continue;
		}
		if(a*e<b*i&&c*e>d*i){
			if(flag){
				cout<<" ";
			}flag=1;
			cout<<i<<"/"<<e;
		}
		if(a*e>b*i&&c*e<d*i){
			if(flag){
				cout<<" ";
			}flag=1;
			cout<<i<<"/"<<e;
		}
	}
	return 0;
} 
