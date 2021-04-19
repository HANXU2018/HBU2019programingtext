#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(string a,string b){
		if(a.size()%2==0){
			string a1 = a.substr(a.size()/2);
			string a2 = a.substr(0,a.size()/2);
			string b1 = b.substr(b.size()/2);
			string b2 = b.substr(0,b.size()/2);
			//cout<<a1+a2 <<" "<<b1+b2<<" "<<a2+a1<<" "<<b1+b2<<endl;
			if((compare(a1,b1)&&compare(a2,b2))|| ( (compare(a1,b2)&&compare(a2,b1) ) )){
				return true;
			}
			else{
				return false;
			}
		}else{
			if(a==b){
				return true;
			}else{
				return false;
			}
		}
}
int main(){
	int n;
	cin>>n;
	while(n--){
		string a,b;
		cin>>a>>b;
		bool p =compare( a, b);
		if(p==true){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
