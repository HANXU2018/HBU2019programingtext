#include<bits/stdc++.h>
using namespace std;
int pre[1000]={-1};
void init(int n);
int Find(int n);
int Merge(int a,int b);
int mm[1000][1000]={0};
int main(){
    int n,m,k,x,y,r;
    cin>>n>>m>>k;
    init(n);
    while(m--){
        cin>>x>>y>>r;
        if(r==-1){
            mm[x][y]=mm[y][x]=1;
        }
        else{
            Merge(x,y);
        }
    }
    while(k--){
        cin>>x>>y;
        if(mm[x][y]==1||mm[y][x]==1){
            if(Find(x)==Find(y)){
                cout<<"OK but..."<<endl;
            }
            else{
                cout<<"No way"<<endl;
            }
        }
        else{
            if(Find(x)==Find(y)){
                cout<<"No problem"<<endl;
            }
            else{
                cout<<"OK"<<endl;
            }
        }
    }
}
void init(int n){
    for(int i=1;i<=n;i++){
        pre[i]=i;
    }
}
int Find(int n)
{
    int i=n;
    while(n!=pre[n]){
        n=pre[n];
    }
    int s=i;
    while(i!=n){
        s=pre[i];
        pre[i]=n;
        i=s;
    }
    return n;
}
int Merge(int a, int b)
{
    int x=Find(a);
    int y=Find(b);
    if(x!=y);
    {
        pre[x]=y;
    }
}