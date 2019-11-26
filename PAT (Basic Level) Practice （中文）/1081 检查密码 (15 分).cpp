#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;getchar();
	for(int i=0;i<n;i++){
		int hasnum=0;
		int hasa=0;
		int no=0;
		string s;
		
		getline(cin,s);
		if(s.length()<6){
			cout<<"Your password is tai duan le."<<endl;
			continue;
		}else{
			for(int a=0;a<(s.length()-1);a++){
			if(s[a]>='a'&&s[a]<='z'){
				 hasa=1;
			}else if(s[a]>='A'&&s[a]<='Z'){
				 hasa=1;
			}else if(s[a]>='0'&&s[a]<='9'){
				 hasnum=1;
			}else if(s[a]=='.'){
			}
			else{
				no=1;
				//cout<<s;
				//cout<<s[a]<<endl;
			}
			
		} 
		if(no){
			printf("Your password is tai luan le.\n");
		}else if(hasnum==0){
			printf("Your password needs shu zi.\n");
		}else if(hasa==0){
			printf("Your password needs zi mu.\n");
		}else
		{
			printf("Your password is wan mei.\n");
		}
		}
		
	}
	return 0;
}
