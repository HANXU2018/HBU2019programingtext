#include<iostream>
using namespace std;
int main(){
	int n,id,x,y;
	int max=-1,maxid=0,min=9999,minid=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>id>>x>>y;
		if(x*x+y*y>max){
			max=x*x+y*y;
			maxid=id;
		}if(x*x+y*y<min){
			min=x*x+y*y;
			minid=id;
		}
	}
	printf("%04d %04d",minid,maxid);
	return 0;
}
