#include<iostream>
using namespace std;
int a,b,c,pop,flag,num,count;
int stack[10005];
int main(){
	cin>>a>>b>>c;
	 for(int i=0;i<c;i++){
	 	pop=0,flag=0,stack[pop]=0,count=1;//每次初始化 
	 	for(int l=0;l<b;l++){
	 		cin>>num;
			 if(num>stack[pop]) {
			 	while(count<=num){
			 		stack[pop++]=count++;
			 		//cout<<"入栈"<<stack[pop-1]<<endl;
			 		if(pop>a){
			 			flag=1;
					 }
				 }
				 
			 }if(num==stack[pop-1]){
			 	//cout<<"出栈"<<stack[pop-1]<<endl;
			 	pop--;
			 	continue;
			 }else{
			 	flag=1;
			 }
			 
		 }
		if(flag){
			cout<<"NO"<<endl;
		} else{
			cout<<"YES"<<endl;
		}
	 }
	return 0;
}
