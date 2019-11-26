#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
struct student{
	string num;
	int score;
	int count;
	
};
struct kaochang{
	string id;
	int num;
};
bool cmp0(student s1,student s2){//恢复输入顺序 
	return s1.count<s2.count;
}
bool cmp1(student s1,student s2){//
	if(s1.score==s2.score){
		return (s1.num<s2.num);
		
	}return (s1.score>s2.score);
}
bool cmp3(kaochang k1,kaochang k2){
	if(k1.num==k2.num){
		return (k1.id<k2.id);
		
	}return (k1.num>k2.num);
}
int main(){
	int n,m;
	string num;
	student stu[10004];
	int score;
	cin>>n>>m;//考生人数和统计要求的个数
	for(int i=0;i<n;i++){
		cin>>num>>score;
		stu[i].num=num;
		stu[i].score=score;
		stu[i].count=i;
	}
	for(int i=1;i<=m;i++){
		int a;
		string s;
		cin>>a>>s;
		//cout<<"Case "<<i<<": "<<a<<" "<<s<<endl;
		printf("Case %d: %d %s\n",i,a,s.c_str());
		if(a==1){
			sort(stu,stu+n,cmp1);
			for(int l=0;l<n;l++){
				if(stu[l].num[0]==s[0]){
					//cout<<stu[l].num<<" "<<stu[l].score<<endl;
					printf("%s %d\n",stu[l].num.c_str(),stu[l].score);
				}
			}
		}else if(a==2){
			int sumperson=0,sumscore=0;
			for(int l=0;l<n;l++){
				string kaochang=stu[l].num.substr(1,3);
				if(kaochang==s){
					sumperson++;
					sumscore+=stu[l].score;
				}
			}
			if(sumperson==0){
				//cout<<"NA"<<endl;
				printf("NA\n");
			}else{
				
				//cout<<sumperson<<" "<<sumscore<<endl;
				printf("%d %d\n",sumperson,sumscore);
			}
			
		}else if(a==3){
			kaochang kc[1000];
			for(int l=0;l<1000;l++){
				kc[l].num=0;
			}
			for(int l=0;l<n;l++){
				string date=stu[l].num.substr(4,6);
				//cout<<date<<" "<<s<<"----"<<endl;
				if(date==s){
					//cout<<stu[l].num<<endl;
					kc[atoi(stu[l].num.substr(1,3).c_str())].id=stu[l].num.substr(1,3);
					kc[atoi(stu[l].num.substr(1,3).c_str())].num++;
				}
			}
			sort(kc,kc+1000,cmp3);
			for(int l=0;l<n;l++){
				if(kc[l].num!=0){
					//cout<<kc[l].id<<" "<<kc[l].num<<endl;
					printf("%s %d\n",kc[l].id.c_str(),kc[l].num);
				}
			}
		}
	}
	
	return 0;
} 
