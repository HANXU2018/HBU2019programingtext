#include<iostream>
#include<cmath>

using namespace std;
long long gcd(long long t1, long long t2) {
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}
void func(long long int a,long long int b){
	if(a*b==0){
		printf("%s",b==0?"Inf":"0");
		return ;
	}bool flag=((a>0&&b<0)||(a<0&&b>0));
	a=abs(a); b=abs(b);
	long long int x=a/b;
	if(flag){
		cout<<"(-";
	}if(x!=0){
		cout<<x;
	}if(a%b==0){
		if(flag){
			cout<<")";
		}return;
	}if(x!=0){
		cout<<" "; 
	}a=a-x*b;
	long long int t=gcd(a,b);
	//cout<<"==="<<t<<endl;
	printf("%lld/%lld%s",a/t,b/t,flag?")":"");  
}
int main(){
	long long int a,b,c,d;
	scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
	func(a,b);printf(" + ");func(c,d);printf(" = ");func(a*d+c*b,b*d);printf("\n");
	func(a,b);printf(" - ");func(c,d);printf(" = ");func(a*d-c*b,b*d);printf("\n");
	func(a,b);printf(" * ");func(c,d);printf(" = ");func(a*c,b*d);printf("\n");
	func(a,b);printf(" / ");func(c,d);printf(" = ");func(a*d,b*c);printf("\n");

	return 0;
} 
