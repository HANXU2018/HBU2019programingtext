#include<iostream>
using namespace std;
int main(){
	int n,count;
	cin>>n;
	count=n;
	double sum=0;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		double f=0;
		int flag=0,flag1=0,flag2=0,flag3=10; 
		for(int i=0;i<s.length();i++){
			if(s[0]=='-'&&i==0){
				flag1=1;
				i=1;
			}
			if(s[i]=='.'){
				//cout<<" ***"<<endl;
				if(flag2==0){
					flag2=1;
				i++;}
				else{
					flag=1;
					cout<<"****";
				}
			}
			if(s[i]>='0'&&s[i]<='9'){
				if(flag2==0){
					f=f*10+s[i]-'0';
					//cout<<f<<endl;
				}else{
					//cout<<"========="<<endl;
					//cout<<s[i]<<endl;
					f=f+(s[i]-'0')*1.0/flag3;
					flag3*=10;
					if(flag3>1000){
						flag=1;
					}
				}
			}else{
				flag=1;
			}
		}
		if(flag||f>1000||f<-1000){
			count--;
			cout<<"ERROR: "<<s<<" is not a legal number"<<endl;
		}else{
			//cout<<" "<<f<<" "<<sum<<endl;
			if(flag1){
				sum-=f;
			}else{
			sum+=f;
			}
		}
	}
	if(count>0){
		if(count==1){
			cout<<"The average of 1 number is ";
			 printf("%.2f",sum/count);
			 return 0;
		}
		cout<<"The average of "<<count<<" numbers is ";
		printf("%.2f",sum/count);
	}else{
		
		cout<<"The average of 0 numbers is Undefined";
	}
	
}
