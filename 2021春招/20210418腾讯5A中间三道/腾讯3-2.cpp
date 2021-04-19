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
	if(n1.p==n2.p){
		return n1.t<n2.t;
	}return n1.p>n2.p;
}
node num[10005];
int day[10005];
int main(){
	int T;
	cin>>T;
	//vector<node>num(n);
	while(T--){
		int n,t;
		cin>>n;
		//num.resize(n);
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
		int ans=0;
		sort(num+0,num+n,cmp1);
		for(int i=0;i<1005;i++){
			day[i]=0;
		}
		for(int i=0;i<n;i++){
			int cun = num[i].t;
			while(day[cun]!=0&&cun>0){
				cun--;
			}
			if(cun>0){
				day[cun]=num[i].p;
			}else{
				ans+=num[i].p;
			}
			
		}
	
		cout<<ans<<endl;
	}
	return 0;	
}

