#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>num(n);
	queue<int>ans;
	
	for(int i=0;i<n;i++){
		cin>>num[i];
	} 
	int flag=0;
	ans.push(0);
	ans.push(n-1);
	int count=n;
	while(ans.size()!=0){
		int a= ans.front();
		ans.pop();
		int b= ans.front();
		ans.pop();
		if(flag==1){
			cout<<" ";
		}
		flag=1;
		cout<<num[b];
		count--;
		if(count==0){
			return 0;
		}
		if(a<b){
			ans.push(a);
			ans.push((a+b-1)/2);
			ans.push((a+b-1)/2+1);
			ans.push(b-1);
		}
	} 
	
	return 0;
}
