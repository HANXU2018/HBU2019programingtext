#include<iostream>
#include<vector>
#include<set>
using namespace std;
int vv[1005];
int path[100005][2];
int findfa(int a){
	if(a!=vv[a]){
		vv[a]=findfa(vv[a]);
	}return vv[a];
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,m;
		cin>>n>>m;
		//vector<vector<int> >node(n,vector<int>(n));
		//vector<vector<int> >path(m,vector<int>(2));
		//set<int>st;
		int flag=1;
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			//node[a-1][b-1]=1;
			//node[b-1][a-1]=1;
			path[i][0]=a-1;
			path[i][1]=b-1;
		}
		for(int i=0;i<m;i++){
			int a,b;
			//vector<int>vv(n,999);
			for(int j=0;j<n;j++){
				vv[j]=j;
			}
			for(int j=0;j<m;j++){
                if(flag==0){
                    break;
                }
				if(j==i){
					continue;
				}
				a=path[j][0];
				b=path[j][1];
				int fa = findfa(a);
				int fb = findfa(b);
				if(fa<fb){
					vv[fb]=fa;
					//findfa(fb,vv);
				}else {
					vv[fa]=fb;
					//findfa(fa,vv);
				}
				//cout<<a<<vv[a]<<" "<<b<<vv[b]<<endl; 
				
			}
			for(int i=0;i<n;i++){
				//cout<<findfa(i,vv)<<"  "<<i<<endl;
				if(findfa(i)!=0){
					flag=0;
				}
			}
		}
		if(flag==0){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
		
	}
	return 0;
}
