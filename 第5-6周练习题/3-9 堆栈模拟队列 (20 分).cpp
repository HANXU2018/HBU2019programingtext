#include<iostream>
#include<vector>
using namespace std;
int main(){
	int a,b,pa=0,pb=0,n;
	cin>>a>>b;
	a>b? a=b:b=a;
	vector<int> v1(a);
	vector<int> v2(b);
	string s;
	while(s[0]!='T'){
		cin>>s;
		if(s[0]=='A'){
			cin>>n;
			if(pa<a){
				v1[pa++]=n;
			}else if(pb==0){
				while(pa>0){
					v2[pb++]=v1[pa--];//×ªÒÆ 
				}v1[pa++]=n;
			}else{
				cout<<"ERROR:Full"<<endl;
			}
		}else if(s[0]=='D'){
			while(pa>0){
				v2[pb++]=v1[pa--];//×ªÒÆ 
			}if(pb>0){
				cout<<v2[--pb]<<endl;
			}else{
				cout<<"ERROR:Empty"<<endl;
			}
		}
	} 
	return 0; 
}
