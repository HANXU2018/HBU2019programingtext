#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,max=0,maxid;
	cin>>n;
	vector<int> num(n+1);
	vector<int> num1(n+1);
	num1[0]=0;
    num[0]=-1;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		if(num[i]>num[i-1]){
			num1[i]=num1[i-1]+1;
			if(num1[i]>max){
				max=num1[i];
				maxid=i;
			}
		}else{
			num1[i]=0;
		}
	}
	int flag=0;
	for(int i=maxid-max;i<=maxid;i++){
		if(flag){
			cout<<" ";
		}flag=1;
		cout<<num[i];
	}
	return 0;
}
