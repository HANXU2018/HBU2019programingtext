#include<iostream>
#include<vector>
using namespace std;

int main(){
	string s;
	string t;
	int k;
	cin>>s>>t>>k;
	string ss = s+s;
	int i=0;
	for(i=0;i<s.size();i++){
		if(ss.substr(i,s.size())==t){
			break;
		}
	}
	
	long long int ans=0;
	//cout<<i<<endl;
	int mmax = (s.size()-1)*k;
	int mmin = 1*k;
	//cout<<mmax<<" "<<mmin<<"****8"<<endl;
	int flag=1;
	vector<int>md1(s.size(),1);
	vector<int>md0(s.size());
	for(int j=1;j<k;j++){
		vector<int>mdt(s.size(),0);
		for(int p=1;p<=s.size()-1;p++){	
			for(int q=1;q<=s.size()-1;q++){
			//	cout<<p<<"+"<<q<<endl;
				mdt[(p+q)%s.size()] += md1[p];
			}
		}
		for(int p=1;p<=s.size();p++){
			md1[p]=mdt[p]%1000000007;
		}
	} 
//	for(int i=0;i<s.size();i++){
//		cout<<md1[i]<<" ";
//	}
//	for(int j=mmin;j<=mmax;j++){
//		if(j%s.size()==i)ans++;
//	}
	cout<<md1[i-1];
	//cout<<0<<endl;
return 0;
}
