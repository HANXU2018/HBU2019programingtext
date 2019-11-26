#include<iostream>
#include<algorithm>
using namespace std;
struct lable{
	int id=0;
	int count=0;
};
bool cmp(lable l1,lable l2){
	if(l1.count==l2.count){
		return l1.id>l2.id; 
	}return l1.count>l2.count;
}
lable lab[1005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		for(int k=0;k<m;k++){
			int l;
			cin>>l;
			lab[l].id=l;
			lab[l].count++;
		}
	}
	sort(lab,lab+1005,cmp);
	cout<<lab[0].id<<" "<<lab[0].count;
	return 0;
}
