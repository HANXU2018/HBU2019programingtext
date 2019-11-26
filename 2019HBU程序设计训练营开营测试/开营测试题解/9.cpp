#include <bits/stdc++.h>
#define N 100005
using namespace std;
struct node     //结点定义
{
    int num;
    node* next;
};
int main()
{
    node head[N];
    int n,k,temp;
    cin>>n;
    for(int i=1; i<=n; i++){    //初始化
        head[i].next=NULL;
        head[i].num=i;
    }
    bool visit[N];
    for(int i=1; i<=n; i++){    //读入
        cin>>k;
        for(int j=1; j<=k; j++){
            cin>>temp;
            visit[temp]=true;
            node* t=(node*)malloc(sizeof(node));
            t->num=temp;
            t->next=head[i].next;
            head[i].next=t;
        }
    }
    if(n==1){                   //n=1
        cout<<"1";
        return 0;
    }
    int start;                  //找到入口
    for(start=1; start<=n; start++)
        if(visit[start]==false)
            break;
    queue<node*> q;
    q.push(&head[start]);       //入口入队
    int res;
    while(!q.empty()){          //bfs
        node* p=&head[q.front()->num];
        while(p->next!=NULL){
            q.push(p->next);
            p=p->next;
        }
        q.pop();
        if(q.size()==1)
            res=q.front()->num;
    }
    cout<<res;
}
