#include<iostream>
using namespace std;
int num[11];
int main(){
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>num[i];
	}
	string s;
	cin>>s;
	int i=0;
	int j=0;
	while(s!="End"){
		if(j<num[i]){
			if(s=="ChuiZi"){
				cout<<"Bu"<<endl;
			}else if(s=="JianDao"){
				cout<<"ChuiZi"<<endl;
			}else if(s=="Bu"){
				cout<<"JianDao"<<endl;
			}
		}else{
			j=-1;
			i++;
			i=i%a;
			if(s=="ChuiZi"){
				cout<<"JianDao"<<endl;
			}else if(s=="JianDao"){
				cout<<"Bu"<<endl;
			}else if(s=="Bu"){
				cout<<"ChuiZi"<<endl;
			}
		}
		j++;
		cin>>s;
	}

	return 0;
	} 
