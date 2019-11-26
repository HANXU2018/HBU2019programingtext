#include<iostream>
using namespace std;
int ascll[300];
int main(){
	char c;
	int count=0;
	for(int i=0;i<2;i++){
		while((c=getchar())!='\n'){
			if(ascll[c]==0){
				ascll[c]=1;
				cout<<c;
			}
	}	
	
	}
	return 0;
}
