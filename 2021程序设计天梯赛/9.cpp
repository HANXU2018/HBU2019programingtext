#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int n,m,smax;
	cin>>n>>m>>smax;
	vector<int>size(n);
	vector<string>ss(n);
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		ss[i]=s;
		//size[i]=s.size();
	}
	vector<char>sstack(smax);
	int top=0;
	int t;
	cin>>t;
	while(t!=-1){
		if(t==0){
			if(top!=0){
				cout<<sstack[top];
				top--;
			}
			
		}
		else {
			if(top==smax){
				//cout<<"Manle"<<smax<<endl;
				if(top!=0){
					cout<<sstack[top];
					top--;
				}
			}
			int caozuo = t-1;
			//	vector<int>size(n);
			//	vector<string>ss(n);
			if(size[caozuo]<ss[caozuo].size()){
				sstack[top+1]=ss[caozuo][size[caozuo]];
				//cout<<sstack[top+1]<<"ruzhan"<<endl;
				size[caozuo]++;
				top++;
			}
			
		}
		cin>>t;
	}
	return 0;
} 
