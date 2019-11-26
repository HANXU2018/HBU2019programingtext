#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		string s;
		int flag1=0,flag2=0; 
		getline(cin,s);
		cout<<s<<endl;
		for(int a=0;a<s.length();a++){
			if(s[a-3]=='o'&&s[a-2]=='n'&&s[a-1]=='g'&&s[a]==','){
				flag1=1;
			}
		}
		if(s[s.length()-1]=='.'&&s[s.length()-2]=='g'&&s[s.length()-3]=='n'&&s[s.length()-4]=='o'){
				flag2=1;
			}
			
		if(flag1&&flag2){
			int countkong=0;
			for(int a=s.length()-1;countkong!=3;a--){
				if(s[a]==' '){
					countkong++;
				}
				if(countkong==3){
					s=s.substr(0,a)+" qiao ben zhong.";
					break;
				}
			}
			cout<<s<<endl;
		}
		else{
			cout<<"Skipped"<<endl;
		}
	}
	return 0;
}
