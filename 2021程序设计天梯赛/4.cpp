#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	double t;
	while(n--){
		cin>>t;
		if(t<m){
			printf("On Sale! %.1f\n",t);
		}
	}
	return 0;
} 
