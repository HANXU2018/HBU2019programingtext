#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
struct stu{
	string name;
	int a=-1;
	float b=-1,c=-1,f;
};
bool cmp(stu s1,stu s2){
	if(s1.f==s2.f){
		return s1.name<s2.name;
	}return s1.f>s2.f;
}
int main(){
	int a,b,c;
	map<string,int>A;
	map<string,int>B;
	map<string,int>C;
	string name;
	int score;
	cin>>a>>b>>c;
	for(int i=0;i<a;i++){
		cin>>name>>score;
		A[name]=score;
		B[name]=-1;
		C[name]=-1;
	}
	for(int i=0;i<b;i++){
		cin>>name>>score;
		B[name]=score;
	}
	for(int i=0;i<c;i++){
		cin>>name>>score;
		C[name]=score;
	}
	vector<stu>st;
	
	for (auto it = A.begin(); it != A.end(); it++)
	{

		stu student;
		student.name=it->first;
		student.a=it->second;
		student.b=B[it->first];
		student.c=C[it->first];
		student.f= (student.c>student.b)? student.c:(int)(student.b*0.4+student.c*0.6+0.5);
		if(student.b==-1){
			student.f=student.c;
		}
		st.push_back(student);
	}
	sort(st.begin(),st.end(),cmp);
	for(int i=0;i<st.size();i++){
		if(st[i].a>=200&&st[i].f>=60){
			cout<<st[i].name<<" "<<st[i].a<<" "<<st[i].b<<" "<<st[i].c<<" "<<st[i].f<<endl;
		}
		
	}
	
	return 0;
}
