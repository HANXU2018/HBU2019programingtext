#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0;
	string name[101]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		int a;
		cin>>s>>a;
		name[a]=s;
		sum+=a;
		//printf("sum==%d\n",sum);
	}
	int av=sum/n/2;
	cout<<av<<" ";
	for(int i=0;i<n;i++){
		if(name[av-i].length()!=0){
			cout<<name[av-i];
			return 0;
		}
        else if(name[av+i].length()!=0){
			cout<<name[av+i];
			return 0;
		}
		
	}
	
	return 0;
}
