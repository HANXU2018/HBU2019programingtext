#include<iostream>
using namespace std;
int main(){
	int m,x,y;
	cin>>m>>x>>y;
	int jia,yi;
	float bing;
	/*
	yi==bing*y;
	jia==yi%10*10+yi/10;
	abs(jia-yi)==x*bing;
	*/
	for(jia =99;jia>=10;jia--){
		yi=jia%10*10+jia/10;
		bing=yi*1.0/y;
		
		if(abs(jia-yi)==x*bing){
			cout<<jia<<" ";
			if(m>jia){
				cout<<"Gai ";
			}else if(m==jia) {
				cout<<"Ping ";
			}else{
				cout<<"Cong ";
			}
			if(m>yi){
				cout<<"Gai ";
			}else if(m==yi) {
				cout<<"Ping ";
			}else{
				cout<<"Cong ";
			}
			if(m>bing){
				cout<<"Gai";
			}else if(m==bing) {
				cout<<"Ping";
			}else{
				cout<<"Cong";
			}
			return 0;
		}
	}
	cout<<"No Solution";
	
	
	
	return 0;
}
