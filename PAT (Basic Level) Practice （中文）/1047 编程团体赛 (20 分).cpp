#include<iostream>
using namespace std;
int team[10005];
int main(){
	int n,a,b,c,max=0,maxid=0;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&a,&c,&b);
		team[a]+=b;
		if(team[a]>max){
			max=team[a];
			maxid=a;
		}
	}
	cout<<maxid<<" "<<max;
	return 0;
}
