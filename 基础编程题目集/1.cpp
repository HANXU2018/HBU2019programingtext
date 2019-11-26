#include<iostream>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int p[105][105];
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		p[a][b]=c;
		p[b][a]=c;
	}
	for(int k=0;k<m;k++){
		int a,b;
		cin>>a>>b;
		if (p[a][b]==1){
			printf("No problem\n");
		}
		else if(p[a][b]==0){
            int k=0;
            for(int i=0;i<105;i++){
				if(p[a][i]==1&&p[b][i]==1){
					printf("No problem\n");
					k=1;
				}
			}if(k==0){
                
			printf("OK\n");
            }
		}
		else if(p[a][b]==-1){
			int k=0;
			for(int i=0;i<105;i++){
				if(p[a][i]==1&&p[b][i]==1){
					printf("OK but...\n");
					k=1;
				}
			}
			if(k==0){
				printf("No way\n");
			}
		}
		
	}

}
