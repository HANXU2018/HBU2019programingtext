#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]!='6'){
			cout<<s[i];
		}else{
			int count6=1;
			while(i+1<s.size()&&s[i+1]=='6'){
				count6++;
				i++;
			}
			if(count6<=3){
				while(count6--){
					cout<<"6";
				}
			}else if(count6>9){
				cout<<"27";
			}else{
				cout<<"9";
			}
		}
	}
	return 0;
} 
