#include<iostream>
using namespace std;
int main(){
	int a;
	char c;
	cin>>a>>c;
	for(int i=0;i<a;i++){
		cout<<c;
	}cout<<endl;
	for(int i=0;i<(a+1)/2-2;i++){
		cout<<c;
		for(int i=1;i<a-1;i++){
			cout<<" ";
		}cout<<c<<endl;
	}if(a>=2){
		for(int i=0;i<a;i++){
			cout<<c;
		}
	}
	return 0;
}
