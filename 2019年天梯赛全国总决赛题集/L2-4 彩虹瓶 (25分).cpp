#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int>v(m);
	vector<int>num(n);
	while(k--){
		for(int i =0;i<n;i++){
			cin>>num[i];
		}
		int top=0;
		int stack=0;
		int flag=1;
		for(int i=1;i<=n;i++){
			if(num[top]==i){
				continue;
			}else if(v[stack]==i){
				stack--;
				continue;
			}else{
				while(num[top]!=i){
					if(stack+1>=n||top+1>=n){
						flag=0;
						break;
					}
					v[++stack]=num[top++];
				}
			}
			if(flag==0){
				break;
			}
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
