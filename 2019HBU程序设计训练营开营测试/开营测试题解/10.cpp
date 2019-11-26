#include<bits/stdc++.h>
using namespace std;
bool mark[510],mp[510][510];
int  m,n,tempg,g;
void dfs(int x)
{
    mark[x] = 1;
    for(int i = 0; i<m; ++i)
    {
        if(!mark[i]&&mp[x][i])
        {
           dfs(i);
        }
    }
}
int main()
{
    cin>>m>>n;
    for(int i =0; i<n; ++i)
    {
        int t1,t2;
        cin>>t1>>t2;
        mp[t1][t2]=mp[t2][t1]=1;
    }
    g = 0;
    tempg = 0;
    for(int i =0; i<m; ++i)
    {
        if(!mark[i]){
            dfs(i);
            tempg++;
        }
    }
    g = tempg;
    int nn;
    cin>>nn;
    for(int i = 0; i<nn; ++i)
    {
        int t;
        cin >>t;
        for(int j = 0; j<m; ++j)
        {
            mp[t][j] = 0;
            mp[j][t] = 0;
        }
        memset(mark,0,sizeof(mark));
        tempg = 0;
        for(int j =0; j<m; ++j)
        {
            if(!mark[j]){
                dfs(j);
                tempg++;
            }
        }
        if(g +2 <= tempg){
            cout<<"Red Alert: City "<<t<<" is lost!"<<endl;

        }
        else
            cout<<"City "<<t<<" is lost."<<endl;
        g = tempg;

    }
    if(nn==m)
        cout<<"Game Over."<<endl;
    return 0;
}
