#include <bits/stdc++.h>
#define maxn 10005
#define nf(i,n) for(int i=0;i<n;i++)
#define mf(i,n) for(int i=1;i<=n;i++)
using namespace std;
int cnt[maxn];              //ͳ�Ƹÿ������ܷ�
int sum[maxn];              //ͳ�Ƹÿ����ŵĿ�������
int n,m;
map<int,map<int,int> >s;    //��Ϊ�����ţ�ֵΪ����
struct node1{
    string ids;     //������
    int score;      //�ɼ�
}stu1[maxn];
struct node2{       //�����ָ���������������
    int ids;        //ָ�������µĿ�����
    int cnt;        //ָ�������µĸÿ�����������
}ans[maxn];
bool cmp(node1 a,node1 b){
    if(a.score==b.score){   //���ڷ������еĿ���������׼��֤�ŵ��ֵ���������
        return a.ids<b.ids;
    }
    return a.score>b.score;
}
bool cmp2(node2 a,node2 b){
    if(a.cnt==b.cnt){       //�����������򰴿�����ŵ���˳�����
        return a.ids<b.ids;
    }else{
        return a.cnt>b.cnt;
    }
}
/*
�ڶ������Ե㣬���Ե��ǿ��Գɼ�Ϊ������
���ĸ����Ե㣬�����ʱҪ��cout�ĳ�printf��cin�ĳ�scanf
���һ�����Ե㣬Ҫ��֤���������6λ������6λ��ǰ�油��
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
                if(stu1[j].ids[0]==g){  //�ҵ�ָ������Ŀ����ĳɼ������
                    f=true;
                    cout<<stu1[j].ids<<" "<<stu1[j].score<<endl;
                }
            }
            if(!f)printf("NA\n");
        }else if(q==2){
            scanf("%d",&x);
            printf("%d\n",x);
            if(cnt[x]==0)printf("NA\n");    //����ע�ⲻҪ��sum[x]==0�����Գɼ��п���Ϊ0
            else printf("%d %d\n",cnt[x],sum[x]);
        }else{
            scanf("%d",&x);
            printf("%06d\n",x);
            bool flag=false;
            int k=0;
            nf(i,1000){
                if(s[i][x]!=0){         //ͳ��ָ���������õ������п���
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
