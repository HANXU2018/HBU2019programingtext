#include<iostream>
using namespace std;
struct fr{
	string name,birth,sex,p1,p2;
};
int main(){
	int n;
	cin>>n;
	fr f[11];
	for(int i=0;i<n;i++){
		cin>>f[i].name>>f[i].birth>>f[i].sex>>f[i].p1>>f[i].p2;
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int m;
		cin>>m;
		if(m>n){
			printf("Not Found\n");
		}
		else{
			cout<<f[i].name<<" "<<f[i].p1<<" "<<f[i].p2<<" "<<f[i].sex<<" "<<f[i].birth<<endl; 
		}
	}
	return 0;
} 


