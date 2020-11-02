#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	string s;
	while(n--){
		getline(cin,s);
		int dou=0;
		while(s[dou]!=',')dou++;
		//cout<<s[dou]<<endl;
		if(s[dou-1]=='g'&&s[dou-2]=='n'&&s[dou-3]=='o'&&s[s.size()-2]=='g'&&s[s.size()-3]=='n'&&s[s.size()-4]=='o'){
			int kong = s.size()-1;
			int countkong=3;
			while(countkong){
				if(s[kong]==' '){
					countkong--;
				}kong--;
			}
			cout<<s.substr(0,kong+1)<<" qiao ben zhong."<<endl;
		}else{
			cout<<"Skipped"<<endl;
		}
	}
	return 0;
}
