#include<iostream>
using namespace std;
string s1[13]={"","tam", "hel", "maa", "huh", "tou", "kes","hei", "elo", "syy", "lok", "mer", "jou"};
string s2[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};

int main(){
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		if(s[0]>='0'&&s[0]<='9'){
			int a=stoi(s);
			if(a>13&&a%13!=0){
				cout<<s1[a/13]<<" "<<s2[a%13]<<endl;
			}else if(a>0&&a%13==0){
                cout<<s1[a/13]<<endl;
            }
            else{
				cout<<s2[a]<<endl;
			}
		}else{
			int count=0;
			if(s.length()>3){
				string c1=s.substr(0,3);
				string c2=s.substr(4);
				for(int l=0;l<13;l++){
					if(c1==s1[l]){
						count+=l*13;
					}
					if(c2==s2[l]){
						count+=l;
					}
					
				}
			}
			else{
				for(int l=0;l<13;l++){
					if(s==s1[l]){
						count+=l*13;
					}
					if(s==s2[l]){
						count+=l;
					}
					
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
} 
