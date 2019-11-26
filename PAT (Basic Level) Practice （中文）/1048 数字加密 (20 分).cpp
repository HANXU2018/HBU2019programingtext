#include<iostream>
using namespace std;
int main(){
	string a,b,s;
	cin>>a>>b;
	if(a.length()<=b.length()){
	
	for(int i=1;i<=a.length();i++){
		if(i%2==1){
			int c=(a[a.length()-i]+b[b.length()-i]-'0'-'0')%13;
			if(c==10)s="J"+s;
			if(c==11)s="Q"+s;
			if(c==12)s="K"+s;
			char d=c+'0';
			if(c<10)s=d+s;
		}else{
			int c=b[b.length()-i]-a[a.length()-i];
			if(c<0)c=c+10;
			s=(char)(c+'0')+s;
		}
	}
	if(a.length()!=b.length())s=b.substr(0,b.length()-a.length())+s;
	cout<<s;
	}
	else{
			for(int i=1;i<=b.length();i++){
		if(i%2==1){
			int c=(a[a.length()-i]+b[b.length()-i]-'0'-'0')%13;
			if(c==10)s="J"+s;
			if(c==11)s="Q"+s;
			if(c==12)s="K"+s;
			char d=c+'0';
			if(c<10)s=d+s;
		}else{
			int c=b[b.length()-i]-a[a.length()-i];
			if(c<0)c=c+10;
			s=(char)(c+'0')+s;
		}
	}
	s=a.substr(0,a.length()-b.length())+s;
	cout<<s;
	}
	
	return 0;
}
