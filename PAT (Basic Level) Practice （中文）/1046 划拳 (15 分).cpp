#include<iostream>
using namespace std;
int main(){
	int n,a,b,c,d,e=0,f=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		if((b!=d)&&(a+c==b||a+c==d)){
			if(a+c==b)e++;
			else f++;
		}
	}cout<<f<<" "<<e;
	return 0;
}
