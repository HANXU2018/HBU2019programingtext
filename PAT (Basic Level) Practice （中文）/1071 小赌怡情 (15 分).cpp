#include<iostream>
using namespace std;
int n1,b,t,n2,k,t2;
int main(){
	cin>>t>>k;
	for(int i=0;i<k;i++){
		cin>>n1>>b>>t2>>n2;
		if(t2>t){
			printf("Not enough tokens.  Total = %d.\n",t);
		}else{
			if(n1>n2&&!b){
				printf("Win %d!  Total = %d.\n",t2,t2+t);
				t=t+t2;
			}else{
				printf("Lose %d.  Total = %d.\n",t2,t-t2);
				t=t-t2;
				if(t==0){
					printf("Game Over.");
					return 0;
				}
			}
		}
	}
} 
