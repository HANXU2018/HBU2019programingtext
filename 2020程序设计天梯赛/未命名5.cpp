#include<iostream>
#include<math.h> 
using namespace std;
int ans[25]={0,1,2,3,4,5,10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
int nums[4][4];
int main(){
//	for(int i=0;i<25;i++){
//		cout<<i<<" "<<ans[i]<<endl;
//	}
int ta=0,tb=0;
int sum=0;
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			cin>>nums[i][j];
			sum+=nums[i][j];
			if(nums[i][j]==0){
				ta=i;
				tb=j;
			}
		}
	}
	nums[ta][tb]=45-sum;
	int a,b;
	for(int i=0;i<3;i++){
		cin>>a>>b;
		cout<<nums[a][b]<<endl;
	}
	int t;
	cin>>t;
	if(t==1){
		cout<<ans[nums[1][1]+nums[1][2]+nums[1][3]]<<endl;
	}
	if(t==2){
		cout<<ans[nums[2][1]+nums[2][2]+nums[2][3]]<<endl;
	}
	if(t==3){
		cout<<ans[nums[3][1]+nums[3][2]+nums[3][3]]<<endl;
	}
	if(t==4){
		cout<<ans[nums[1][1]+nums[2][1]+nums[3][1]]<<endl;
	}
	if(t==5){
		cout<<ans[nums[1][2]+nums[2][2]+nums[3][2]]<<endl;
	}
	if(t==6){
		cout<<ans[nums[1][3]+nums[2][3]+nums[3][3]]<<endl;
	}
	if(t==8){
		cout<<ans[nums[3][1]+nums[2][2]+nums[1][3]]<<endl;
	}if(t==7){
		cout<<ans[nums[1][1]+nums[2][2]+nums[3][3]]<<endl;
	}
	return 0;
}
