#include<iostream>
#include<vector>
using namespace std;
int yu[6];
int main(){
	int n;
	cin>>n;
	int t;
	vector<int>nums(n);
	for(int i=0;i<n;i++){
		cin>>t;
		nums[i]=t;
	}
	int ans=0;
	
	for(int i=0;i<n;i++){
		int sum=0;
		int ttnum[6]={0,0,0,0,0,0};
		for(int j=0;j<6;j++){
			ttnum[j]=yu[j];
		}
		for(int j=0;j<6;j++){
			t= yu[j]+nums[i];
			//cout<<"t==="<<t<<endl;
			if(ttnum[t%6]>t){
				//cout<< t%6 <<" 更新"<<yu[t%6]<<endl; 
				ttnum[t%6]=ttnum[t%6];
			}else{
				//cout<< t%6 <<" 更新"<<yu[t%6]<<" "<<t<<endl; 
				ttnum[t%6]=t;
			}
			//cout<<ttnum[t%6]<<endl;
		}
		for(int j=0;j<6;j++){
			yu[j]=ttnum[j];
			//cout<<yu[j]<<" ";
		}//cout<<endl;
	}
//	for(int i=0;i<6;i++){
//		cout<<yu[i]<<endl;
//	}
	if(yu[0]==0){
		cout<<-1<<endl;
	}else{
		cout<<yu[0]<<endl;
	}
	
	return 0;
}
