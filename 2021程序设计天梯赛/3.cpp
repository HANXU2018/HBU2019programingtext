#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int yue=0;
	yue = n%100;
	if(n>=100000){
		cout<<n/100<<"-";
		if(yue<10){
			cout<<0<<yue;
		}else{
			cout<<yue;
		}
	}else{
		if(n>2112){
			
			cout<<19<<n/100<<"-";
		if(yue<10){
			cout<<0<<yue;
		}else{
			cout<<yue;
		}
		}
		else{
			if(n>1000){
				cout<<20<<n/100<<"-";
				if(yue<10){
			cout<<0<<yue;
		}else{
			cout<<yue;
		}
			}else{
				cout<<200<<n/100<<"-";
				if(yue<10){
			cout<<0<<yue;
		}else{
			cout<<yue;
		}
			}
		}
	}
	return 0;
} 
