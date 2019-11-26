#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int  G1,sum=0,max=-1,min=100,b,count=0;
		cin>>G1;
		for(int a=1;a<n;a++){
			cin>>b;
			if(b>=0&&b<=m){
				count++;
				if(b>max){
					max=b;
				}if(b<min){
					min=b;
				}
				sum+=b;
				
			}
		}
		//cout<<"G"<<G1*0.5<<"****"<<((sum-max-min)/(count-2))*0.5<<endl;
		double s= G1*0.5+((sum-max-min)/(count-2))*0.5;
		//cout<<s<<endl;
		printf("%d\n",(int)(s+0.5));
		
	}
	return 0;
}
