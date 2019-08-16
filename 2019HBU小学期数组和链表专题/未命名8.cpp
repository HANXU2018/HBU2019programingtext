#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct p{
	int num=0;
	int hongbao=0;
	int t=0;
};
bool cmp(p a,p b){
	return a.hongbao>b.hongbao;
}
int main(){
	int n;
	cin>>n;
	vector<p> ren(10005);
	for(int i=0;i<n;i++){
		ren[i].num=i+1;
		int m;
		cin>>m;
		for(int a=0;a<m;a++){
			int p,q;
			cin>>p>>q;
			ren[p-1].hongbao+=q;
			ren[i].hongbao-=q;
			ren[p-1].t++;
		}
	}
	for(int i=0;i<n;i++){
		for(int l=i;l<n-1;l++){
			if(ren[l].hongbao<ren[l+1].hongbao){
				p t=ren[l];
				ren[l]=ren[l+1];
				ren[l+1]=t;
				
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int l=i;l<n-1;l++){
			if(ren[l].hongbao==ren[l+1].hongbao){
				if(ren[l].num>ren[l+1].num){
						p t=ren[l];
				ren[l]=ren[l+1];
				ren[l+1]=t;
				}
				
			}
		}
	}
		for(int i=0;i<n;i++){
		for(int l=i;l<n-1;l++){
			if(ren[l].hongbao<ren[l+1].hongbao){
				p t=ren[l];
				ren[l]=ren[l+1];
				ren[l+1]=t;
				
			}
		}
	}
		for(int i=0;i<n;i++){
		for(int l=i;l<n-1;l++){
			if(ren[l].hongbao==ren[l+1].hongbao){
				if(ren[l].t<ren[l+1].t){
						p t=ren[l];
				ren[l]=ren[l+1];
				ren[l+1]=t;
				}
				
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d %.2f\n",ren[i].num,ren[i].hongbao*1.0/100);
	}
	return 0;
}
