#include<iostream>
#include<map>
using namespace std;
int pro[10000];
int p,t;
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=0;i<b;i++){
		int d;
		cin>>d;
		pro[d]=1;
	}
	for(int i=0;i<a;i++){
		int flag=0;
		int d;
		string s;
		cin>>s>>d;
		for(int e=0;e<d;e++){
			int g;
			cin>>g;
			if(pro[g]==1){
				flag++;
				if(flag==1){
					cout<<s<<":";
				}
				printf(" %04d",g);
				t++;
			}
			
		}if(flag!=0){
			cout<<endl;
			p++;	
			}
	}
	cout<<p<<" "<<t;
	
	return 0;
}
