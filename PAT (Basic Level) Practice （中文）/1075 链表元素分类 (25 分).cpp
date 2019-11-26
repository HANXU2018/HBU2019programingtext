#include<iostream>
using namespace std;

int main(){
int next[100005];
int data[100005];
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=0;i<b;i++){
		int i1,i2,i3;
		cin>>i1>>i2>>i3;
		next[i1]=i3;
		data[i1]=i2;
	}
	int count=0;
	int point=a;
	for(int i=0;i<b;i++){
		if(data[point]<0){
			count++;
			if(count==1){
				printf("%05d %d ",point,data[point]);
			}else if(count==b){
				printf("%05d\n%05d %d -1",point,point,data[point]);
			}else{
				printf("%05d\n%05d %d ",point,point,data[point]);
			}
			
		}
		point=next[point];
	} 
	point=a;
	for(int i=0;i<b;i++){
		if(data[point]>=0&&data[point]<=c){
			count++;
			if(count==1){
				printf("%05d %d ",point,data[point]);
			}else if(count==b){
				printf("%05d\n%05d %d -1",point,point,data[point]);
			}else{
				printf("%05d\n%05d %d ",point,point,data[point]);
			}
			
		}
		point=next[point];
	} 
	point=a;
	for(int i=0;i<b;i++){
		if(data[point]>c){
			count++;
			if(count==1){
				printf("%05d %d ",point,data[point]);
			}else if(count==b){
				printf("%05d\n%05d %d -1",point,point,data[point]);
			}else{
				printf("%05d\n%05d %d ",point,point,data[point]);
			}
			
		}
		point=next[point];
	} 
	return 0;
}
