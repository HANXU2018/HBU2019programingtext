#include<iostream>
using namespace std;
int main(){
	double k1=1;
	string n;
	cin>> n;
	int len=n.length();
	if(n[0]=='-'){
		len--;
		k1+=0.5;
		//cout<<"fushu"<<endl;
	}
	if((n[n.length()-1]-'0')%2==0){
		k1*=2;
		//cout<<"oushu"<<endl;
	}
	int count=0;
	for(int i=0;i<n.length();i++){
		if(n[i]=='2'){
			count++;
			//cout<<count<<endl;
		}
	}
	printf("%.2f%%",1.0*count/len*k1*100);
	return 0;
}
