#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>num(n);
	vector<int>numax(n);
	vector<int>numin(n);
	
	int max=-1,min=1000000009;
	for(int i=0;i<n;i++){
		cin>>num[i];
		if(num[i]>max)max=num[i];
		numax[i]=max;
	}
	for(int i=n-1;i>=0;i--){
		if(num[i]<min)min=num[i];
		numin[i]=min;
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(num[i]<=numin[i]&&num[i]>=numax[i]){
			count++;
		}
	}
	
	cout<<count<<endl;
	int flag=0;
	int cou=count;
	vector<int>num3(count);
	for(int i=0;i<n;i++){
		if(num[i]<=numin[i]&&num[i]>=numax[i]){
			num3[count-1]=num[i];
			count--;
			//cout<<num3[count];
		}
	}
	sort(num3.begin(),num3.end());
	for(int i=0;i<cou;i++){
			if(flag){
				cout<<" ";
			}flag=1;
			cout<<num3[i];
		
	}
	return 0;
} 
