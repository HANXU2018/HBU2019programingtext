#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	scanf("%d.%d.%d %d.%d.%d",&a,&b,&c,&d,&e,&f);
	int count=d*17*29+e*29+f-a*17*29-b*29-c;
	if(count<0){
		cout<<"-";
		count=-count;
	} 
	cout<<count/29/17<<"."<<count/29%17<<"."<<count%29;
	return 0;
}
