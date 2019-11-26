#include<iostream>
#include<algorithm>
using namespace std;
int sum[100005];
int main(){
	int n;
	cin>>n;
	int s=0;
	for(int i=0;i<n;i++){
		cin>>sum[i];
		s+=sum[i];
	}
	sort(sum+0,sum+n);
	int out=0,in=0;
		for(int i=0;i<n/2;i++){
			in+=sum[i];
		}
		for(int i=n-1;i>=n/2;i--){
			out+=sum[i];
		}
		printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %d",n%2==0? n/2:n/2+1,n/2,out-in);
	return 0;
}
