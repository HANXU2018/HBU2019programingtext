#include<iostream>
#include<set>;
using namespace std;
int main(){
	int y,n;
	cin>>y>>n;
	int age=0;
	int a,b,c,d;
	while(1){
		if(y<10){
			a=y,b=0,c=0,d=0;
		}else if(y<100){
			a=y/10,b=y%10,c=0,d=0;
		}else if(y<1000){
			a=y/100,b=y/10%10,c=y%10,d=0;
		}else{
			a=y/1000,b=y/100%10,c=y/10%10,d=y%10;
		}
		set<int>diff;
		diff.insert(a);
		diff.insert(b);
		diff.insert(c);
		diff.insert(d);
		if(diff.size()==n){
			printf("%d %04d",age,y); 
			return 0;
		}
		
		y++;
		age++;
	}
	return 0;
}
