#include<iostream>
using namespace std;
int gcd(int a,int b){
	int l=1;
	while(a%l==0&&b%l==0){
		l++;
	}return l-1;
}
int main(){
	int a,b,c,d;
	scanf("%d/%d %d/%d",&a,&b,&c,&d);
	
	int ab=gcd(a,b);
	int cd=gcd(c,d);
	cout<<ab<<endl;
	cout<<cd<<endl;
	return 0;
}
