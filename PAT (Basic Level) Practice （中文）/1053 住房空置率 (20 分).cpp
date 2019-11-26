#include<iostream>
using namespace std;
int main(){
	int n;
	float e;
	int d,f=0,q=0;
	cin>>n>>e>>d;
	for(int i=0;i<n;i++){
		int count=0,o;
		float s;
		cin>>o;
		for(int l=0;l<o;l++){
			cin>>s;
			if(s<e){
				count++;
			}
		}
		
		if((count)>(o-count)){
			if(o>d){
			f++;}
            else {q++;}
		}
	}
	printf("%.1f%% %.1f%%",q*100.0/n,f*100.0/n);
	return 0;
}
