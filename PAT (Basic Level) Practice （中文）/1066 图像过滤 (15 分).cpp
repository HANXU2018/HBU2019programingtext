#include<iostream>
using namespace std;
int mn[500][500];
int main(){
	int m,n,j,k,l;
	cin>>m>>n>>j>>k>>l;
	for(int a=0;a<m;a++){
		for(int b=0;b<n-1;b++){
			cin>>mn[a][b];
			if(mn[a][b]>=j&&mn[a][b]<=k){
				mn[a][b]=l;
			}
			printf("%03d ",mn[a][b]);
		
		}
		
		int p;
		cin>>p;
		mn[a][n-1]=p;
			if(mn[a][n-1]>=j&&mn[a][n-1]<=k){
				mn[a][n-1]=l;
			}
		printf("%03d\n",mn[a][n-1]);
	}
		
	return 0;
}
