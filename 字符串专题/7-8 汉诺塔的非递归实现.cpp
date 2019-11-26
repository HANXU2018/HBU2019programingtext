#include<iostream>
using namespace std;
int hanno(int n,char yuanshi,char fuzhu,char mubiao){
	if(n==1){
		printf("%c -> %c\n",yuanshi,mubiao);
	}else{
		hanno(n-1,yuanshi,mubiao,fuzhu);
		hanno(1,yuanshi,fuzhu,mubiao);
		hanno(n-1,fuzhu,yuanshi,mubiao);
	}
	return 0;
}
int main(){
	int n;
	cin>>n;
	hanno(n,'a','b','c');
	return 0;
} 
