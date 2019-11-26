#include<iostream>
#include<map>
#include <cctype>
#include<vector>
#include<algorithm>
using namespace std;
struct school{
	string name;
	int count;
	int  score;
};
bool cmp(school s1,school s2){
	if(s1.score!=s2.score){
		return s1.score>s2.score;
	}else if(s1.count!=s2.count){
		return s1.count<s2.count;
	}else{
		return s1.name<s2.name;
	}
}
int main(){
	int n;
	cin>>n;
	string id,sch;
	int sco;
	map<string,int>count;
	map<string,double>score;
	for(int i=0;i<n;i++){
		cin>>id>>sco>>sch;
		for(int a=0;a<sch.length();a++){
			sch[a]=tolower(sch[a]);
		}//转小写
		if(id[0]=='A'){
			score[sch]+=sco;
		} else if(id[0]=='T'){
			score[sch]+=sco*1.5;
		}else{
			score[sch]+=sco/1.5;
		}
		count[sch]++;
	}
	vector<school>SC;
	for (auto it = score.begin(); it != score.end(); it++)
    {
		   SC.push_back(school{it->first, count[it->first], (int)(score[it->first]-0.5)});
		//存进结构体 这里很巧妙
	}
	sort(SC.begin(),SC.end(),cmp);
	
	cout<<SC.size()<<endl;
	int num=0;
	int lastscore=0;
	for(int i=0;i<SC.size();i++){
		if(SC[i].score!=lastscore) num=i+1;
		lastscore =SC[i].score;
		printf("%d %s %d %d\n",num,SC[i].name.c_str(),SC[i].score,SC[i].count);
	}
	
	return 0;
} 
