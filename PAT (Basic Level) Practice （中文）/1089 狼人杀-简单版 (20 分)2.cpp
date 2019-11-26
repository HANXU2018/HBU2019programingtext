#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	int v[105];
	int a[105];
	cin>>n;
	for(int i=1;i<=n;i++){ 
	cin>>v[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int l=1;l<=n;l++){
				a[l]=1;
			}
		
		vector<int>lie;
		a[i]=-1;
		a[j]=-1;
		for(int k=1;k<=n;k++){
			//cout<<v[k]<<" "<<a[abs(v[k])]<<"*";
			if(v[k]*a[abs(v[k])]<0){
			lie.push_back(k);
			}
		//printf("%2d",a[k]);
		}
		//cout<<" "<<lie.size()<<endl;
		if(lie.size()==2&&a[lie[0]]*a[lie[1]]==-1){
			cout<<i<<" "<<j;
			return 0;
		}
	}
	}
	cout << "No Solution";
	return 0;
} 
