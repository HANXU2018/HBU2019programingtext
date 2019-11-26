//7-2 英文单词排序 (25 分)
#include<iostream>
#include<algorithm>
using namespace std;
struct s2{
	string s;
	int n;
};
bool cmp(s2 a,s2 b){
	return a.s.size()==b.s.size()?a.n<b.n:a.s.size()<b.s.size();
}

int main(){
	
	string s;
	s2 s1[25];
	int i=0;
	cin>>s;
	while(s!="#"){
		s1[i].s=s;
		s1[i].n=i;
		i++;
		cin>>s;
	}
	sort(s1,s1+i,cmp);
	for(int a=0;a<i;a++){
		cout<<s1[a].s<<" ";
	}
	return 0;
}
