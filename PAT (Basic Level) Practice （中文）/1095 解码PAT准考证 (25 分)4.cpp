#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
struct student{
	string id;
	int score=0;
	int day;
	int kc;
}stu[10005];
struct kaochang{
	string id;
	int num=0;
	int sum=0;
	
}kc[1005]; 
struct type{
	string s;
	int num;
};
type A[10005];
type B[10005];
int countA,countB;

bool cmp0(type a,type b){
	if(a.num==b.num){
		return a.s<b.s;
	}return a.num>b.num;
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		string s;
		int num;
		string kcname;
		cin>>s>>num;
		stu[i].id=s;
		stu[i].score=num;
		stu[i].day=atoi(s.substr(4,6).c_str());
		stu[i].kc=atoi(s.substr(10,3).c_str());
		if(s[0]=='A'){
			A[countA].num=num;
			A[countA++].s=s;
		}else{
			B[countB].num=num;
			B[countB++].s=s;
		}
		kcname=s.substr(1,3);
		kc[atoi(kcname.c_str())].id=kcname;
		kc[atoi(kcname.c_str())].num+=1;
		kc[atoi(kcname.c_str())].sum+=num;
	}
	sort(A,A+countA,cmp0);
	sort(B,B+countB,cmp0);
	for(int i=1;i<=m;i++){
		int a;
		string s;
		cin>>a>>s;
		printf("Case %d: %d %s\n",i,a,s.c_str());
		if(a==1){
			if(s[0]=='A'){
				for(int l=0;l<countA;l++){
					printf("%s %d\n",A[l].s.c_str(),A[l].num);
				}
			}else{
				for(int l=0;l<countB;l++){
					printf("%s %d\n",B[l].s.c_str(),B[l].num);
				}
			}
		}else if(a==2){
			int p=atoi(s.c_str());
			if(p<101||p>999){
				printf("NA\n");				
			}else {
				if(kc[p].num==0){
					printf("NA\n");	
				}else {
					printf("%d %03d\n",kc[p].num,kc[p].sum);
				}
			}
		}else if(a==3){
			int day=atoi(s.c_str());
			int kaochang2[1000];
			for(int l=0;l<n;l++){
				if(stu[l].day==day){
					kaochang2[stu[l].kc]++;
				}
			}
			for(int l=100;l<1000;l++){
				kaochang2[l]=l;
			}
		}
	}
	return 0;
}
