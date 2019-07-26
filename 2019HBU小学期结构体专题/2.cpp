#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
	int sum=0,a=0,n=0;
	string name[101];
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s>>a;
		name[a]=s;
		sum+=a;
	}
	double av=sum*1.0/n/2;
	double min=999;
	int minid=0;
	for(int i=0;i<100;i++){
		if(name[i].length()!=0&&fabs(i-av)<min){
			min=fabs(i-av);
			minid=i;
		}
		/*if(name[av-i].length()!=0){
			cout<<av<<" "<<name[av-i];
			return 0;
		}
        if(name[av+i].length()!=0){
			cout<<av<<" "<<name[av+i];
			return 0;
		}*/
	}
	cout<<av<<" "<<minid;
	return 0;
}
