#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	map<int,int>v;
	vector<vector<int>>pic(x+2,vector<int>(y+2,0));
	vector<vector<int>>cha(x+2,vector<int>(y+2,0));
	for(int a=1;a<=y;a++){
		for(int b=1;b<=x;b++){
			cin>>pic[a][b];
			if(pic[a][b]>16777216||pic[a][b]<0){
				pic[a][b]=0;
				
			}
			v[pic[a][b]]++;
		
		}
	}
	int num;
	int nx;
	int ny;
	int count=0;
	/*
		Ëã²î 
	*/
	for(int a=2;a<y;a++){
		for(int b=2;b<x;b++){
			int c1,c2,c3,c4,c5,c6,c7,c8;
			c1=pic[a+1][b]-pic[a][b];
			c1=abs(c1)>z;
			c2=pic[a-1][b]-pic[a][b];
			c2=abs(c2)>z;
			c3=pic[a][b+1]-pic[a][b];
			c3=abs(c3)>z;
			c4=pic[a][b-1]-pic[a][b];
			c4=abs(c4)>z;
			c5=pic[a+1][b+1]-pic[a][b];
			c5=abs(c5)>z;
			c6=pic[a+1][b-1]-pic[a][b];
			c6=abs(c6)>z;
			c7=pic[a-1][b+1]-pic[a][b];
			c7=abs(c7)>z;
			c8=pic[a-1][b-1]-pic[a][b];
			c8=abs(c8)>z;
			cha[a][b]=c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8;
			if(v[pic[a][b]]==1&&cha[a][b]){
				num=pic[a][b];
				nx=b;
				ny=a;
				count++;
				
			}
		
		}
	}
	if(count>1){
					cout<<"Not Unique";
					return 0;
				}
	if(count==0){
		cout<<"Not Exist";
		return 0; 
	}else{
		printf("(%d, %d): %d",nx,ny,num);
		return 0;
	}
	for(int a=1;a<y+1;a++){
				for(int b=1;b<x+1;b++){
					printf("%10d",pic[a][b]);
					//cout<<cha[a][b]<<"*";
				}cout<<endl;
			}
	for(int a=1;a<y+1;a++){
				for(int b=1;b<x+1;b++){
					printf("%10d",cha[a][b]);
					//cout<<cha[a][b]<<"*";
				}cout<<endl;
			}
} 
