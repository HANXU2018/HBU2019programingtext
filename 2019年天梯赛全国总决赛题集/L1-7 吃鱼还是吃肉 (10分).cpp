#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1){
			if(b>130){
				cout<<"ni li hai! ";
			}else if(b==130){
				cout<<"wan mei! ";
			}else{
				cout<<"duo chi yu! ";
			}
			
			if(c>27){
				cout<<"shao chi rou!"<<endl;
			}else if(c==27){
				cout<<"wan mei!"<<endl;
			}else{
				cout<<"duo chi rou!"<<endl;
			}
		}else{
			if(b>129){
				cout<<"ni li hai! ";
			}else if(b==129){
				cout<<"wan mei! ";
			}else{
				cout<<"duo chi yu! ";
			}
			
			if(c>25){
				cout<<"shao chi rou!"<<endl;
			}else if(c==25){
				cout<<"wan mei!"<<endl;
			}else{
				cout<<"duo chi rou!"<<endl;
			}
		}
	}
	return 0;
}
