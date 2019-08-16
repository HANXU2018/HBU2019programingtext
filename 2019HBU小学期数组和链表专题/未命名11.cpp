#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
struct stu{
	int num;
	string s;
	int scor;
};
bool cmp1(stu a,stu b){
	return a.num<b.num;
}
bool cmp2(stu a,stu b){
	if(a.s==b.s){
		return cmp1(a,b);
	}
	return a.s>b.s;
}
bool cmp3(stu a,stu b){
	if(a.scor==b.scor){
		return cmp1(a,b);
	} 
	return a.scor<b.scor;
}
int main(){
	int n,c;
	vector<stu> st;
	cin>>n>>c;
	stu st1;
	for(int i=0;i<n;i++){
		cin>>st1.num>>st1.s>>st1.scor;
		st.push_back(st1);
	}
	if(c==1){
		sort(st.begin(),st.end(),cmp1);
	}
	else if(c==2){
			sort(st.begin(),st.end(),cmp2);
	} 
	else {
			sort(st.begin(),st.end(),cmp3);
	}
	for(int i=0;i<n;i++){
		printf("%06d %s %d\n",st[i].num,st[i].s.c_str(),st[i].scor);
	}
	return 0;
}
