#include<iostream>
using namespace std;
int main(){
	string s;
	int count=0;
	int flag=0;
	int first=0;
	int ci=0;
	while(getline(cin,s)){
		if(s=="."){
			break;
		}
		if(s.size()==0){
			continue;
		}
		//cout<<s.size()<<endl; 
		count++;
		string ss="chi1 huo3 guo1";
//		cout<<ss.size();
		if(s.size()<14){
			continue;
		}
		for(int i=0;i<=(s.size()-14);i++){
			//cout<<i<<" "<<s.size()-14<<endl;
			cout<<s.substr(i,14)<<endl; 
			string sss=s.substr(i,14);
			if(sss==ss){
				ci++;
				if(ci==1){
				first=count;
				}
			} 
		}
	
		
	} 
	cout<<count<<endl;
	if(ci>0){
		cout<<first<<" "<<ci<<endl;
	}else{
		cout<<"-_-#";
	}
	
	return 0;
}
