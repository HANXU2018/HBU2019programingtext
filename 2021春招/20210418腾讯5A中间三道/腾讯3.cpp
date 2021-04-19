/*

4
3
3 1 1
3 6 9
3
3 1 1
3 6 9
3
3 1 1
3 6 9
3
3 1 1
3 6 9

*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
	int t;
	int p;
};
bool cmp1(node n1,node n2){
	if(n1.t==n2.t){
		return n1.p>n2.p;
	}return n1.t>n2.t;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n,t;
		cin>>n;
		vector<node>num(n);
		int maxt=0;
		for(int i=0;i<n;i++){
			cin>>t;
			if(t>maxt){
				maxt=t;
			}
			num[i].t=t;
		}
		int maxp=0;
		for(int i=0;i<n;i++){
			cin>>t;
				if(t>maxp){
					maxp=t;
				}
			num[i].p=t;
		}
		sort(num.begin(),num.end(),cmp1);
		int ans = 0;
		int mmint=num[0].t;
		for(int i=0;i<n;i++){
			//cout<<num[i].t<<" "<<num[i].p<<endl;
			if(mmint<num[i].t){
				ans+=num[i].p;// 已经错过了 
			}
			else{
				mmint=num[i].t-1;//这个没错过然后小一个 
			}
		}
		cout<<ans<<endl;
	}
	return 0;	
}

