#include<iostream>
using namespace std;
int main(){
  string a,b;
  cin>>a>>b;
  int c=a.length()>b.length()? b.length():a.length();
  int d=a.length()<b.length()? b.length():a.length();
  int count=0;
  string s;
  for(int i=0;i<d;i++){
  	if(a.length()>i){
  		count+=a[a.length()-i-1]-'0';
	  }if(b.length()>i){
	  	count+=b[b.length()-i-1]-'0';
	  }
  	char o=(count%10+'0');
  	s=o+s;
  	count=count/10;
  }
  if(count>0){
  	s+=(count%10+'0');
  }
  cout<<s;
  
  return 0;
}
