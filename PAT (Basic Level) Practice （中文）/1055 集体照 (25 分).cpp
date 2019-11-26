#include<iostream>
#include<algorithm>
using namespace std;
struct p{
	string name;
	int high;
};
bool cmp(p a,p b){
	if(a.high!=b.high){
		return a.high>b.high;
	}else{
		return a.name<b.name;
	}
}
p peop[100005];
string zuo[100000];
string you[100000]; 
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	int l;
	for(int i=0;i<n;i++){
		cin>>s>>l;
		peop[i].name=s;
		peop[i].high=l;
	}sort(peop+0,peop+n,cmp);
	for(int i=0;i<n;i++){
		cout<<peop[i].name<<peop[i].high<<endl;
	}
	int q=0;
	for(int i=0;i<k;i++){
		//KÐÐ
		int flag=0;
		int p=q;
		 int t=n/k;
		 if(i==0){
		 	t+=n%k;
		 }int z=0,y=0;
		 t--;
		 while(t>0){
		 	if(t>0){
			 t--;
			 zuo[z++]=peop[++q].name;
			}
		 	if(t>0){
		 		t--;
			 you[y++]=peop[++q].name;
		 	}
		 }
		 while(z-->0){
		 	if(flag){
		 		cout<<" ";
			 }flag=1;
		 	cout<<zuo[z];
		 }
		 if(flag){
		 		cout<<" ";
			 }flag=1;
		 cout<<peop[p].name;
		 while(y-->0){
		 		cout<<" ";
		 	cout<<you[y];
		 }if(i<k-1)cout<<endl;
		 q++;
		 
		 
	}
	return 0;
}
