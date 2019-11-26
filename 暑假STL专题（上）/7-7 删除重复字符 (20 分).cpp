#include<iostream>
using namespace std;
int cha[300];
int main(){
	char c;
	while(cin>>c){
		cha[c]++;
	}
	for(int i=32;i<128;i++){
		if(cha[i]>0){
			printf("%c",i);
		}
	}
	return 0;
}
