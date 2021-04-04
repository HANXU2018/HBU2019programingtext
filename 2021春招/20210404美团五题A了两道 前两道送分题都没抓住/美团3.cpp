#include<iostream>
#include<math.h>
//#include<sstream>
using namespace std;
//stringstream sm;
string ss(int t){
	if(t==1){
		return "1";
	}
	string s;
	string s1 = to_string(1);
	//sm<<1;
	//sm>>s1;
	string s2 = to_string(t) ;
	//sm<<t;
	//sm>>s2; 
	//cout<<s2<<endl;
	for(int i=2;i<=sqrt(t);i++){
		if(t%i==0){
			s1=s1+to_string(i);
			//sm<<t/i; 
			//string tt = ""+t/i;
			string tt = to_string(t/i);
			//sm>>tt;
			//cout<<tt<<endl;
			if(i*i!=t){
				s2=tt+s2;
			//cout<<s2<<endl;
			}
			
		}
	}
	s= s1+s2;
	//cout<<s<<endl;
	return s;
}
int contain(string s1,string s2){
	for(int i=0;i<s1.size();i++){
		for(int j=0;j<s2.size();j++){
			if(s1[i]==s2[j]){
				cout<<j<<" "<<s2.size() <<endl;
				if(j==s2.size()-1){
					return 1;
				}
				continue;
			}else{
				break;
			}
		}
	}
	return 0;
}
int fun(int t,int k){
	string s = ss(t);
	string p = to_string(k);
	//sm<<k;
	//p = sm.str();
	//sm>>p;
	//cout<<s<<endl;
	string::size_type pos;
	pos = s.find(p);
	if(pos != s.npos){
		return 1;
	}else{
		return 0;
	}
	//return contain(s,p);
}
int main(){
	int n,k;
	cin>>n>>k;
	int count=0;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		//cout<<fun(t,k)<<endl;
		count+=fun(t,k);
	}
	cout<<count;
	return 0;
}
