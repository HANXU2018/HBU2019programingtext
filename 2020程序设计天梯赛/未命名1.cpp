#include<iostream>
using namespace std;
struct fen{
	int zi;
	int mu;
};
int go(int a, int b){
	if(a>b){
		if(a%b==0){
			return b;
		}else{
			return go(b,a%b);
		}
	}else{
		long long int t = a;
		a=b;
		b=t;
		if(a%b==0){
			return b;
		}else{
			return go(b,a%b);
		}
	}
}
fen add(fen a, fen b){
	fen t;
	//cout<<"a "<<a.zi<<"/"<<a.mu <<"+ "<<b.zi<<"/"<<b.mu<<endl;
	t.mu = a.mu*b.mu;
	t.zi = a.zi*b.mu+b.zi*a.mu;
	//cout<<t.mu<<" "<<t.zi;
	int gong = go(t.mu,t.zi);
	//cout<<"gong = " <<gong<<endl;
	t.mu/=gong;
	t.zi/=gong;
	return t;
}
int main(){
	int n;
//	cin>>n;
scanf("%d",&n);
	fen sum;
	sum.mu=1;
	sum.zi=1;
	double t;
	for(int i=0;i<n;i++){
		//cin>>t;
		scanf("%lf",&t);
		//cout<<t<<endl;
		int p = t*10;
		fen z;
		z.mu=p;
		z.zi=10;
		sum = add(sum,z);
	}
	sum.zi-=sum.mu;
	if(sum.zi!=0){
		printf("%0.2f",1.0*sum.mu*n/sum.zi);
	}else{
		printf("0.00");
	}
	return 0;
} 
