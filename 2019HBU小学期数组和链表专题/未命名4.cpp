#include<iostream>
using namespace std;
int main(){
	int n,i,x=0,is_virgin=0;
	cin>>n;
	for(int i=1;;i++){
		x=x*10+1;
		if(x>=n){
			is_virgin=1;
			cout<<x/n;
		}
		else if(is_virgin)cout<<"0"; 
		x%=n;
		if(!x){
			cout<<" "<<i;
			return 0;
		}
	}
	return 0;
}
