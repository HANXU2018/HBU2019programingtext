#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct kaosheng{
	string id;
	int score;
	int paiming;
	int kaodian;
	int kaodianpaiming;
};
vector<struct kaosheng>ks;
int xiaopai[100];
int kaochangchengji[101];

bool cmp(struct kaosheng k1,struct kaosheng k2){
	return k1.score==k2.score?k1.id<k2.id:k1.score>k2.score;
} 

int main(){
	int n;
	int count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		string s;
		int num;
		for(int b=0;b<a;b++){
			cin>>s>>num;
			kaosheng k;
			
			k.id=s;
			k.score=num;
			k.kaodian=i+1;
			ks.push_back(k);
			count++;
		}
	}
	sort(ks.begin(),ks.end(),cmp);
	fill(kaochangchengji,kaochangchengji+n,-1);
	int mingci=0;
	for(int i=0;i<count;i++){
		cout<<ks[i].id<<" "<<++mingci<<" "<<ks[i].score<<" "<<ks[i].kaodian<<" ";
		if(kaochangchengji[i]>-1 && kaochangchengji[i]==ks[i].score)
		{
			cout<<xiaopai[ks[i].kaodian]<<endl;
			xiaopai[ks[i].kaodian]++;
		}
		else 
			cout<<++xiaopai[ks[i].kaodian]<<endl;
		kaochangchengji[i] = ks[i].score;
	}
	
	return 0;
}
