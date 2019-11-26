
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 30000+7, INF = 0x7f7f7f7f;
 
int T, n;
struct node {
    string s;
    int sc, id, st, fst;
}a[maxn];
bool cmp(node a, node b) {
    if(a.sc == b.sc) return a.s < b.s;
    return a.sc > b.sc;
}
 
 
int main() {
    scanf("%d", &T);
    int cnt = 0;
    for(int i = 1; i <= T; ++i) {
        scanf("%d", &n);
        string s; int x;
        for(int j = 0; j < n; ++j) {
            cin >> s >> x;
            a[cnt+j].s = s; a[cnt+j].sc = x; a[cnt+j].id = i;
        }
        sort(a+cnt, a+cnt+n, cmp);
        a[cnt].st = 1;
        for(int j = 1; j < n; ++j) {
            if(a[cnt+j].sc == a[cnt+j-1].sc) a[cnt+j].st = a[cnt+j-1].st;
            else a[cnt+j].st = j+1;
        }
        cnt += n;
    }
    sort(a, a+cnt, cmp);
 
    cout << cnt << endl;
    a[0].fst = 1;
    cout << a[0].s << " " << a[0].fst << " " << a[0].id << " " << a[0].st << endl;
    for(int i = 1; i < cnt; ++i) {
        if(a[i].sc == a[i-1].sc) a[i].fst = a[i-1].fst;
        else a[i].fst = i+1;
        cout << a[i].s << " " << a[i].fst << " " << a[i].id << " " << a[i].st << endl;
    }
 
 
    return 0;
}
