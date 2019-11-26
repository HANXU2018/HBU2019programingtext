#include<iostream>
using namespace std;
int dui[20][20];
int n;
int zhaolian(int b){
	for(int i=0;i<n;i++){
		for(int a=0;a<n;a++)
		{
			
			if(dui[i][a]==1){
				
			}
		}	
	}    
	return 0;
}
int main(){
	cin>>n;
	char c;
	for(int i=0;i<n;i++){c=getchar();
		for(int a=0;a<n;a++){
			c=getchar();
			if(c=='W'){
				dui[i][a]=1;
			}	
		}
	}
	/*
	for(int i=0;i<n;i++){
		for(int a=0;a<n;a++){
			
				cout<<dui[i][a];
				
		}
		cout<<endl;
	}
	*/
	int k=zhaolian(0);
	if(k==0){
		printf("No Solution");
	}
	
	return 0;
}
