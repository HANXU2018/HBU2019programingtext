#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    priority_queue<int,vector<int>,greater<int> > q;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a;
        q.push(a);
    }
    int sum = 0;
    while(q.size() != 1){
        int n1 = q.top(); q.pop();
        int n2 = q.top(); q.pop();
        q.push(n1+n2);
        sum += n1+n2;
    }
    cout << sum;
    

}