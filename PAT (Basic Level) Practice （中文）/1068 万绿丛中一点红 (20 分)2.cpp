#include<iostream>
#include<cmath>
using namespace std;
int pic[1005][1005];
int num[16777277];
int cha[8][2]={
{0,1},{1,1},{-1,1},{0,-1},{1,-1},{1,0},{-1,0} ,{-1,-1}
};
int main(){
	int m,n,c;
	cin>>m>>n>>c;
	for(int i=1;i<=n;i++){
		for(int l=1;l<=m;l++){
			cin>>pic[i][l];
			num[pic[i][l]]++;
		}
	}
	int d,f,nu=0;
	for(int i=2;i<n;i++){
		for(int l=2;l<m;l++){
			int flag=1;
			for(int k=0;k<8;k++){
				if(abs(pic[i+cha[k][0]][l+cha[k][1]]-pic[i][l])>c){
					
				}else{
					flag=0;
				}
			
			}
				if(flag&&num[pic[i][l]]==1){
					nu++;
					d=i,f=l;
					//printf("(%d, %d): %d\n",d,f,pic[d][f]);
				}
		}
	}
	if(nu==1){
		printf("(%d, %d): %d",d,f,pic[d][f]);
	}else if (nu==0){
		printf("Not Exist");
	}else{
		cout<<"Not Unique";
	}
}
