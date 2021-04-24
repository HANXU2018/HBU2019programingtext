#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	getchar();
	while(a--){
		string s;
		getline(cin,s);
		int flag=1;
		for(int i=0;i<s.size()&&flag==1;i++){
			string tt = s.substr(i,4);
			string t2 = s.substr(i,7);
			if(tt=="easy"||t2=="qiandao"){
				flag=0;
			}
		}
		if(flag==1){
			if(b>0){
				b--;	
			}else{
				cout<<s<<endl;
				return 0;
			}
			
		}
		
	//	cout<<s<<endl;
	}
	cout<<"Wo AK le";
	return 0;
} 
