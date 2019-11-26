#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	float h;
	for(int i=0;i<n;i++){
		cin>>s>>h;
		if(s=="M"){
			printf("%.2f\n",h/1.09);
		}
		else{
			printf("%.2f\n",h*1.09);
		}
	}
	return 0;
}
