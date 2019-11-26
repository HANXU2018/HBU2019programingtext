#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int s;
	cin>>s;
	int m,n;
	m=sqrt(s);
	while(s%m!=0){
		m++;
	}n=s/m;
	if(n>m){
		int t=n;
		n=m;
		m=t;
	} 
	vector<int> s1(s);
	for(int i=0;i<s;i++){
		cin>>s1[i];
	}
	sort(s1.begin(),s1.end());
	vector<vector<int>(n)> s2(m);
	
	return 0;
}
