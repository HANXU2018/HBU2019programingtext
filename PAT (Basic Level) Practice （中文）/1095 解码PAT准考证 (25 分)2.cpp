#include <bits/stdc++.h>
#define maxn 10005
#define nf(i,n) for(int i=0;i<n;i++)
#define mf(i,n) for(int i=1;i<=n;i++)
using namespace std;
int cnt[maxn];              //统计该考场号总分
int sum[maxn];              //统计该考场号的考生人数
int n,m;
map<int,map<int,int> >s;    //键为考场号，值为日期
struct node1{
    string ids;     //考场号
    int score;      //成绩
}stu1[maxn];
struct node2{       //解决按指定日期输出的问题
    int ids;        //指定日期下的考场号
    int cnt;        //指定日期下的该考场的总人数
}ans[maxn];
bool cmp(node1 a,node1 b){
    if(a.score==b.score){   //对于分数并列的考生，按其准考证号的字典序递增输出
        return a.ids<b.ids;
    }
    return a.score>b.score;
}
bool cmp2(node2 a,node2 b){
    if(a.cnt==b.cnt){       //若人数并列则按考场编号递增顺序输出
        return a.ids<b.ids;
    }else{
        return a.cnt>b.cnt;
    }
}
/*
第二个测试点，测试的是考试成绩为零的情况
第四个测试点，如果超时要把cout改成printf，cin改成scanf
最后一个测试点，要保证输出日期是6位，不足6位在前面补零
*/
int main(){
    cin>>n>>m;
    string name;
    int score;
    nf(i,n){
        getchar();
        cin>>name>>score;
        int seet=100*(name[1]-'0')+10*(name[2]-'0')+(name[3]-'0');
        cnt[seet]++;
        sum[seet]+=score;
        stu1[i].ids=name;
        stu1[i].score=score;
        int dates=0;
        for(int i=4;i<=9;i++){
            dates=dates*10+name[i]-'0';
        }
        s[seet][dates]++;
    }
    sort(stu1,stu1+n,cmp);
    int q,x;
    char g;
    mf(i,m){
        scanf("%d",&q);
        cout<<"Case "<<i<<": "<<q<<" ";
        if(q==1){
            getchar();
            scanf("%c",&g);
            printf("%c\n",g);
            bool f=false;
            for(int j=0;j<n;j++){
                if(stu1[j].ids[0]==g){  //找到指定级别的考生的成绩并输出
                    f=true;
                    cout<<stu1[j].ids<<" "<<stu1[j].score<<endl;
                }
            }
            if(!f)printf("NA\n");
        }else if(q==2){
            scanf("%d",&x);
            printf("%d\n",x);
            if(cnt[x]==0)printf("NA\n");    //这里注意不要加sum[x]==0，考试成绩有可能为0
            else printf("%d %d\n",cnt[x],sum[x]);
        }else{
            scanf("%d",&x);
            printf("%06d\n",x);
            bool flag=false;
            int k=0;
            nf(i,1000){
                if(s[i][x]!=0){         //统计指定日期下用到的所有考场
                    flag=true;
                    ans[k].ids=i;
                    ans[k].cnt=s[i][x];
                    k++;
                }
            }
            if(!flag)printf("NA\n");
            else{
                sort(ans,ans+k,cmp2);
                nf(i,k){
                    printf("%d %d\n",ans[i].ids,ans[i].cnt);
                }
            }
        }
    }
    return 0;
}
