#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,pair <int,int>>PIII;
int main(){
    int m,n,t;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    vector<vector<int>>visited(n,vector<int>(m));
    vector<vector<int>>is(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>t;
            v[i][j]=t;
        }
    }
    priority_queue<PIII,vector<PIII>,greater<PIII>> heap;
    for(int r = 0;r<n;r++){
        for(int c= 0;c<m;c++){
            if(r==0||r==n-1||c==0||c==m-1){
                heap.push(make_pair(v[r][c],make_pair(r,c)));
                visited[r][c]=1;
            }
        }
    }
    int dx[5]={1,0,-1,0,1};
    int ans = 0;
    
    while(!heap.empty()){
    	PIII iter = heap.top();
    	heap.pop();
    	for(int i=0;i<4;i++){
    		int r = iter.second.first+dx[i];
    		int c = iter.second.second+dx[i+1];
    		if(r>=0&&r<n&&c>=0&&c<m&&!visited[r][c]){
    			if(v[r][c]<iter.first){
    				ans+=iter.first-v[r][c];
    				is[r][c]=-1;
				}
				heap.push(make_pair(max(iter.first,v[r][c]),make_pair(r,c)));
				visited[r][c]=1;
			}
		}
	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<is[i][j]<<" ";
//		}cout<<endl;
//	}
	int flag=1;
	int count=0;
	while(flag==1){
		flag=0;
		//int a=-1,b=-1;
		queue<int>a;
		queue<int>b;
		for(int i=0;flag==0&&i<n;i++){
			for(int j=0;flag==0&&j<m;j++){
				if(is[i][j]==-1){
					count++;
					//cout<<count<<endl;
					a.push(i);
					b.push(j);
					is[i][j]=0;
					flag=1;
				}
			}//cout<<endl;
		}
		//int dx[5]={1,0,-1,0,1};
		
		while(a.size()!=0){
			int la = a.front();
			int lb = b.front();
			a.pop();
    		b.pop();
			for(int i=0;i<4;i++){
				int r = la+dx[i];
    			int c = lb+dx[i+1];
    			
    			if(is[r][c]==-1){
					a.push(r);
					b.push(c);
					is[r][c]=0;
				}
			}
		}
		
	}
//		for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<is[i][j]<<" ";
//		}cout<<endl;
//	}
	cout<<count<<endl;
	//cout<<ans<<endl;
    //cout<<1<<endl;
    return 0 ;
}
