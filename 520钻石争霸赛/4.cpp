#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	vector<int> num(a+1);
	for(int i=0;i<a;i++){
		cin>>num[i];
	}
	num[a]=b;
	sort(num.begin(),num.end());
	int k=0;
	int sum=0;
	for(k=0;num[k]<b;k++);
	int l=k-1,r=k-1;
		for(r;r>0;r--){
			int t= b-num[r];
			while(num[l]>=t&&l>0){
				l--;
			}
			sum+=(r-l);
		}
		l=0;
		for(r=a;r>k;r--){
			int t= num[r]-b;
			for(l;l>0;l--){
				if(num[l]>t&&num[l-1]<=t){
					sum+=(r-l);
					if(l<=k){
						sum--;
					}
					break;
				}
			}
		}
		

	cout<<sum;
	return 0;
} 
