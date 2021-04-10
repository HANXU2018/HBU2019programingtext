#include<iostream>
#include<vector>
using namespace std;
vector<int> num ;
vector<int> ans ;
int main(){
	int n;
	while(scanf("%d",&n)){
		//cout<<n<<endl;
		num.push_back(n);
		char c = getchar();
		if(c!=','){
			break;
		}
	}
	int k;
	cin>>k;
	//cout<<k<<endl;
	for(int i=0;i<=num.size()-k;i++){
		int aa=-1;
		for(int j=0;j<k;j++){
			if(num[i+j]>aa)aa=num[i+j];
		}
		ans.push_back(aa);
	}
	cout<<"[";
	for(int i=0;i<ans.size();i++){
		if(i>0)cout<<",";
		cout<<ans[i];
	}cout<<"]";
	
	return 0;
}
