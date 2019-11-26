#include<iostream>
using namespace std;
int daan[105];
int score[105];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>score[i];
	}for(int i=0;i<m;i++){
		cin>>daan[i];
	}
	for(int i=0;i<n;i++){
		int num=0;
		int s;
		for(int l=0;l<m;l++){
			cin>>s;
			if(daan[l]==s){
				num+=score[l];
			}
		}
		cout<<num<<endl;
	}
	
	return 0;
}
