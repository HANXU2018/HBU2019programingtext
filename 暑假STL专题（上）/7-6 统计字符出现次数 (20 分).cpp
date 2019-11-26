#include<iostream>
using namespace std;
int num[400]={0};
int main(){
	char c;
	c=getchar();
	while(c!='\n'){
		num[c]++;
		c=getchar();
	}
	cin>>c;
	cout<<num[c];
	return 0;
}
