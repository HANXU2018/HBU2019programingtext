#include<iostream>
using namespace std;
int zuzong[100005];
int countzu[100005];
int count(int i){
	if(countzu[i]==0){
	
	int coun=1;
	if(zuzong[i]!=-1){
		coun=count(zuzong[i])+1;
	} else{
		coun=1;
	}
	countzu[i]=coun;
	return coun;
	}
	else{
		return countzu[i];
	}
}
int main(){
	int n;
	cin>>n;
	int a;
	
	for(int i=1;i<=n;i++){
		cin>>a;
		zuzong[i]=a;
	}
	int max=0;
	for(int i=1;i<=n;i++){
		countzu[i]=count(i);
		if(count(i)>max){
			max=count(i);
		}
	}
	cout<<max<<endl;
	int flag=1;
	for(int i=1;i<=n;i++){
		if(countzu[i]==max){
			if(flag){
			cout<<i;
			flag=0;	
			}else{
				cout<<" "<<i;
			}
			
		}
	}
	
	
	return 0;
}
