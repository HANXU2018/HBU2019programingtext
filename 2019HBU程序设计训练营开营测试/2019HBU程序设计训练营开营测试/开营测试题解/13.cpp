#include <bits/stdc++.h>
using namespace std;
int n,m;
int level[10010];
vector<int> e[10010];
bool vis[10010];
int bfs(int p){
    int cnt = 0;
    queue<int> q;
    q.push(p); level[p] = 0; vis[p] = 1; cnt++;
    while(!q.empty()){
        int temp = q.front(); q.pop();
        for(int i = 0; i < e[temp].size(); ++i){
            
            if(!vis[e[temp][i]]){
                level[e[temp][i]] = level[temp]+1;
                if(level[e[temp][i]] <= 6){
                    q.push(e[temp][i]); vis[e[temp][i]] = 1; cnt++;
                }
                
            }
        }
    }
    return cnt;
}
int main(){
    int a,b;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    for(int i = 1; i <= n; ++i){
        memset(vis,0,sizeof(vis));
        int cnt = bfs(i);
        printf("%d: %.2f%%\n",i,cnt*100.0/n);
    }
}