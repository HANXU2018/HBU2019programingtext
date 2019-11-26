#include<iostream>
#include<vector> 
using namespace std;
	int s1[100];
	int s2[100];
int main(){
	int a,b;
	cin>>a>>b;
	if(a<b){
		int t=a;
		a=b;
		b=t;
	}
	char c;
	int s1count=0;
	int s2count=0;
	while(cin>>c&&c!='T'){
		if(c=='A'){
			int n;
			cin>> n;
			//Èë¶Ó
			if(s1count>0&&s2count==b){
				//Õ´Âú
				cout<<"ERROR:Full"<<endl; 
			} 
			else if(s2count<b){
				s2[s2count++]=n;
			}
			if(s2count==b&&s1count==0){
				while(s2count!=0){
					s1[s1count++]=s2[--s2count];	
				}
			}
		}
		else if(c=='D'){
			if(s1count==0&&s2count!=0){
				while(s2count!=0){
					s1[s1count++]=s2[--s2count];	
				}
			}
			if(s1count==0&&s2count==0){
				cout<<"ERROR:Empty"<<endl; 
			}
			if(s1count!=0){
				cout<<s1[--s1count]<<endl;
			}
			if(s2count==b&&s1count==0){
				while(s2count!=0){
					s1[s1count++]=s2[--s2count];	
				}
			}
		} 
		
	/*	cout<<"-------------"<<endl;
		for(int i=0;i<b;i++){
			
			cout<<s1[i]<<" "<<s2[i]<<endl;
		}
		cout<<s1count<<" "<<s2count<<endl; 
		cout<<"-------------"<<endl;
	*/
	}
	
return 0;
}
