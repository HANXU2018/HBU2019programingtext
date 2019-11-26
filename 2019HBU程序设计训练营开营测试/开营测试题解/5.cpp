#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
ll son[101],mom[101];
ll gcd(ll a,ll b)
{
    return b==0?a:gcd(b,a%b);
}
void add(ll a,ll b,ll c,ll d,ll *aa,ll *bb)
{
    ll t1,t2,t;
    t2 = b*d;
    t1 = a*d+b*c;
    t = gcd(t1,t2);
    *aa = t1/t;
    *bb = t2/t;

}
int main()
{
    scanf("%d ",&n);
    for(int i = 0; i<n; ++i)
    {
        scanf("%lld/%lld",&son[i],&mom[i]);
    }
    for(int i =1; i<n; ++i)
    {
        add(son[i-1],mom[i-1],son[i],mom[i],&son[i],&mom[i]);
    }
    mom[n-1]*=n;
    ll t = gcd(mom[n-1],son[n-1]);
    son[n-1]/=t;
    mom[n-1]/=t;
    if(mom[n-1]<0){
        son[n-1] = -son[n-1];
        mom[n-1] = -mom[n-1];
    }
    cout<<son[n-1];

    if(mom[n-1]!=1)
    {
        cout<<"/"<<mom[n-1];
    }
    return 0;
}
