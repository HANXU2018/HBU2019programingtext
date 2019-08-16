#include<iostream>
#include<algorithm>
using namespace std;
struct people{
	int num;
	int qiang;
	int sum;
};
bool cmp(people a,people b){
	if(a.sum==b.sum){
		return a.qiang>b.qiang;
	}
	return a.sum>b.sum;
	
}
int main(){
	int n;
	cin>>n;
	people p[10004];
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		p[i].num=i+1;
		for(int a=0;a<k;a++){
			int q,m;
			cin>>q>>m;
			p[q-1].qiang++;
			p[q-1].sum+=m;
			p[i].sum-=m;
		}
		
	}
	sort(p+0,p+n,cmp);
	for(int i=0;i<n;i++){
	//	cout<<p[i].num<<" "<<p[i].sum<<endl;
	printf("%d %.2f\n",p[i].num,p[i].sum*1.0/100);
	}
	
	return 0;
}
