//7-2 ”¢Œƒµ•¥ ≈≈–Ú (25 ∑÷)
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string a,string b){
	return a.size()<b.size();
		
	
}
int main(){
	string s;
	string s1[20];
	int i=0;
	cin>>s;
	while(s!="#"){
		s1[i]=s;
		//cout<<s1[i]<<i<<endl;
		i++;
		cin>>s;
	}
	sort(s1,s1+i,cmp);
	for(int a=0;a<i;a++){
		cout<<s1[a]<<" ";
	}
	return 0;
}
