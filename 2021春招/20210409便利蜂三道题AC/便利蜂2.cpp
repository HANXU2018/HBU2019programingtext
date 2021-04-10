#include<iostream>
using namespace std;
int num[32];
int main(){
	int a,b;
	while(scanf("%d-%d",&a,&b)){
		//cout<<a<<" "<<b<<endl;
		char c = getchar();
		for(int i=a;i<=b;i++){
			num[i]=1;
		}
		if(c!=','){
			break;
		}
	}
	int flag=1;
	int count=0;
	for(int i=1;i<=31;i++){
		if(num[i]==1&&flag==1){
			//cout<<i<<endl;
			if(count!=0)cout<<",";
			count++;
			cout<<i;
			flag=0;
		}
		if(num[i]==1&&num[i+1]==0&&flag==0){
			//cout<<i<<"   end"<<endl;
			cout<<"-"<<i;
			flag=1;
		}
	}
	return 0;
}
