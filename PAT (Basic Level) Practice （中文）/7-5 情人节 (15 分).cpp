#include<iostream>
using namespace std;
int main(){
	string s,a,b;
	int count;
	while(cin>>s){
		if(s=="."){
			break;
		}
		count++;
		if(count==2){
			a=s;
		}
		if(count==14){
			b=s;
			cout<<a<<" and "<<b<<" are inviting you to dinner...";
			return 0;
		}
	}
	if(count<2){
		cout<<"Momo... No one is for you ...";
	}
	else{
		cout<<a<<" is the only one for you...";
	}
	return 0;
}
