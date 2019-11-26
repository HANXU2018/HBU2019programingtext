#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int max=0,n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		if(a*a+b*b>max){
			max=a*a+b*b;
		}
	}
	printf("%.2f",sqrt(max)+0.05);
}
