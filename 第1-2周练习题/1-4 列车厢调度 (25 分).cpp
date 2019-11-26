#include<iostream>
using namespace std;
int che[300];
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int d=0;
	int a=0;
	int i=0;
	while(i!=s2.length()-1&&d!=s2.length()){
		while(che[a-1]==(int)s2[i]){
			//cout<<"3->2"<<endl;
			a--;
			i++;
		}if(s1[d]==s2[i]){
			//cout<<"1->2"<<endl;
			d++;
			i++;
		}else{
			//cout<<"1->3"<<endl;
			che[a++]=s1[d++];
		}
		
		while(che[a-1]==(int)s2[i]&&che[a-1]!=0){
			//cout<<"3->2"<<endl;
			a--;
			i++;
		}if(d==s1.length()&&i!=s2.length()&&a>1){
			cout<<"Are you kidding me?";
			return 0;	
		}
	}
	d=0;
	a=0;
	i=0;
		while(i!=s2.length()-1&&d!=s2.length()){
		while(che[a-1]==(int)s2[i]){
			cout<<"3->2"<<endl;
			a--;
			i++;
		}if(s1[d]==s2[i]){
			cout<<"1->2"<<endl;
			d++;
			i++;
		}else{
			cout<<"1->3"<<endl;
			che[a++]=s1[d++];
		}
		
		while(che[a-1]==(int)s2[i]&&che[a-1]!=0){
			cout<<"3->2"<<endl;
			a--;
			i++;
		}if(d==s1.length()&&i!=s2.length()&&a>1){
			cout<<"Are you kidding me?";
			return 0;	
		}
	}
	
	return 0;
}
