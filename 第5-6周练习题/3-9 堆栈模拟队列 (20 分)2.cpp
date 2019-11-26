#include<iostream>
#include<vector> 
using namespace std;
int a,b,n,s1count=0,s2count=0,s1[100],s2[100];
int main(){
	cin>>a>>b;
	a>b? a=b:b=a;
	char c;
	while(cin>>c&&c!='T'){
		if(c=='A'){cin>> n;
			if(s1count>0&&s2count==b)cout<<"ERROR:Full"<<endl; 
			else if(s2count<b)s2[s2count++]=n;
			if(s2count==b&&s1count==0)while(s2count!=0)s1[s1count++]=s2[--s2count];
		}
		else if(c=='D'){
			if(s1count==0&&s2count!=0)while(s2count!=0)s1[s1count++]=s2[--s2count];
			if(s1count==0&&s2count==0)cout<<"ERROR:Empty"<<endl; 
			if(s1count!=0)cout<<s1[--s1count]<<endl;
			if(s2count==b&&s1count==0)while(s2count!=0){s1[s1count++]=s2[--s2count];}
		} 
	}
return 0;
}
