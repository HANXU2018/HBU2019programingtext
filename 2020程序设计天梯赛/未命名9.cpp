#include<iostream>
#include<queue>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
struct people{
	string name;
	string id;
	int statu;
	int day;
	int h;
	int m;
};
bool cmp1(people p1,people p2){
	if(p1.h==p2.h){
		return p1.m<p2.m;
	} else{
		return p1.h<p2.h;
	}
} 
int main(){
	int d,w;
	cin>>d>>w;
	queue<people>ling;
	queue<people>bing;
	map<string,int>dd;
	map<string,int>pp;
	for(int i=0;i<d;i++){
		int t,s;
		
		cin>>t>>s;
		vector<people>dday;
		for(int j=0;j<t;j++){
			string name;
			string id;
			int statu;
			int day=i;
			int h;
			int m;
			cin>>name>>id>>statu;
			scanf("%02d:%02d",&h,&m);
			people p;
			p.name=name;
			p.id=id;
			p.statu=statu;
			p.day=i;
			p.h=h;
			p.m=m;
			dday.push_back( p );
			}
		sort(dday.begin(),dday.end(),cmp1);
		
		for(int q=0;q<dday.size();q++){
			if(dday[q].id.size()!=18){
				continue;	
			}
			if(s>0&&(dd[dday[q].id]==0||dd[dday[q].id]+w<i+1)){
				dd[dday[q].id]=i+1;
				s--;
				ling.push(dday[q]);
				//cout<<"--------------------"<<endl;
				cout<<dday[q].name<<" "<<dday[q].id<<endl;
			}
			if(dday[q].statu==1){
				//cout<<dday[q].name<<endl;
				if(pp[dday[q].id]!=1){
					bing.push(dday[q]);
					pp[dday[q].id]=1;
					//cout<<"**************************--------------------"<<endl;
					//cout<<dday[q].name<<" "<<dday[q].id<<endl;
				}
				
			}
		}
	}
//	for(int i=0;i<ling.size();i++){
//		people t = ling.front();
//		ling.pop();
//		cout<<t.name<<" "<<t.id<<endl;
//	}
int y=bing.size();
	for(int i=0;i<y;i++){
		people t = bing.front();
		bing.pop();
		cout<<t.name<<" "<<t.id<<endl;
	}
	return 0;
}
