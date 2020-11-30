#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	int flag=0;
	int ans=0;
	cin>>a>>b>>c>>d>>e>>f;
	int ma=-1;
	if(a>ma){
		ma=a;
	}
	if(b>ma){
		ma=b;
	}
	if(c>ma){
		ma=c;
	}
	if(d>ma){
		ma=d;
	}
	if(a+f<ma){
		flag++;
		ans=1;
	}
	if(b+f<ma){
		flag++;
		ans=2;
	}
	if(c+f<ma){
		flag++;
		ans=3;
	}
	if(d+f<ma){
		flag++;
		ans=4;
	}
	if(a<e){
		flag++;
		ans=1;
	}
	if(b<e){
		flag++;
		ans=2;
	}
	if(c<e){
		flag++;
		ans=3;
	}
	if(d<e){
		flag++;
		ans=4;
	}
	if(flag==0){
		cout<<"Normal";
	}else if(flag==1){
		cout<<"Warning: please check #"<<ans<<"!";
	}else{
		cout<<"Warning: please check all the tires!";
	}
	return 0;
}
