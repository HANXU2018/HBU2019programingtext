#include<iostream>
#include<cmath>
using namespace std;
int s1[100005][2];
int s2[100005][2];
int num[100005];
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=0;i<b;i++){
		int c,d,e;
		cin>>c>>d>>e;
		s1[c][0]=d;
		s1[c][1]=e;
	}int ss2=0;
//	cout<<"*********"<<endl;
	printf("%05d %d ",a,s1[a][0]);
	//cout<<a<<" "<<s1[a][0]<<" ";
		if(s1[a][0]<0){
			s1[a][0]=-s1[a][0];
		}
		num[s1[a][0]]=1;
	for(int i=1;i<b;i++){
		a=s1[a][1];
		if(a==-1){
			break;
		} 
		if(num[abs(s1[a][0])]==0){
			printf("%05d\n%05d %d ",a,a,s1[a][0]);
			num[abs(s1[a][0])]=1;
			//cout<<a<<endl<<a<<" "<<s1[a][0]<<" ";
		}else{
			s2[ss2][0]=a;
			s2[ss2][1]=s1[a][0];
			ss2++;
		}
	}
			cout<<"-1"<<endl;
			
		
	
	//cout<<endl<<"*********"<<endl;
	for(int i=0;i<ss2;i++){
		if(i==0){
			printf("%05d %d ",s2[i][0],s2[i][1]);
			//cout<<s2[i][0]<<" "<<s2[i][1]<<" ";
		}else{
			printf("%05d\n%05d %d ",s2[i][0],s2[i][0],s2[i][1]);
			//cout<<s2[i][0]<<endl<<s2[i][0]<<" "<<s2[i][1]<<" ";
		}
	}
	if(ss2>0)cout<<"-1"<<endl;
	
	return 0;
}
