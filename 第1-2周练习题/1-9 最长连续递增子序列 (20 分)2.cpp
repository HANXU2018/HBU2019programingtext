#include<iostream>
using namespace std;   
int num1[100005],num[100005];
int main(){int n,max=0,maxid,flag=0;	
	cin>>n;
    num[0]=-1;//第一个一定要是-1这样才能后面的都比他大
	for(int i=1;i<=n;i++){
		cin>>num[i];
		if(num[i]>num[i-1]){
			num1[i]=num1[i-1]+1;
			if(num1[i]>max){
			max=num1[i];
			maxid=i;
			}
		}else{num1[i]=1;}
	}
	for(int i=1;i<max+1;i++){
		if(flag)cout<<" ";
		flag=1;
		cout<<num[maxid-max+i];
	}
	return 0;
}
