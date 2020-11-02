#include<iostream>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	double c = a/b/b;
	printf("%.1lf\n",c);
	if(c>25){
		cout<<"PANG";
	}else{
		cout<<"Hai Xing";
	}
	return 0;
}
