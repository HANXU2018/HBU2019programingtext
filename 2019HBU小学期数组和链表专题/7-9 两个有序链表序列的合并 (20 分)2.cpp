#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> v;
	int t;
    int count=0;
    cin>>t;
    while(t!=-1){
    	v[count]=t;
    	cin>>t;
    	count++;
	}
	cin>>t;
	while(t!=-1){
    	v[count]=t;
    	cin>>t;
    	count++;
	}
	
		if(count==0){
		printf("NULL");
		return 0;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<count;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
