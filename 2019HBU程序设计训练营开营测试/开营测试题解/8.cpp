#include <bits/stdc++.h>
using namespace std;
int n,m,a[1010];
bool judge(){
    stack<int> sta;
    int pa = 0;
    for(int i = 1; i <= n; ++i){
        sta.push(i);
        if(sta.size() > m) return false;
        while(!sta.empty()){
            if(sta.top() == a[pa]){
                sta.pop();
                pa++;
            }
            else break;
        }
    }
    while(!sta.empty()){
        if(sta.top() != a[pa]) return false;
        sta.pop();
        pa++;
    }
    return true;
}
int main(){
    int k;
    cin >> m >> n >> k;
    while(k--){
        for(int i = 0; i < n; ++i) cin >> a[i];
        if(judge()) cout << "YES\n";
        else cout <<"NO\n";
    }
}