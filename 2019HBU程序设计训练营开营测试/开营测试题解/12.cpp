#include <bits/stdc++.h>
using namespace std;

int temp[300],e[300][300];
int n;
set<int> s;

bool judge(int temp[]){
    s.clear();
    s.insert(temp,temp+n+1);
    if(s.size() != n){
		return false;
	}
    if(temp[0] != temp[n]){
		return false;
	}
    for(int i = 1; i < n+1; ++i){
		if(!e[temp[i]][temp[i-1]]){
			return false;
		}
	}
    return true;
}

int main(){
    //freopen("in.txt","r",stdin);
    ios::sync_with_stdio(false);
    int m,k,l,a,b;
    cin>>n>>m;
    for(int i = 0;i < m;++i){
        cin>>a>>b;
        e[a][b] = e[b][a] = 1;
    }
    cin>>k;
    while(k--){
        cin >> l;
        for(int i = 0;i < l;++i){
            cin>>temp[i];
        }
        if(l != n+1){
			cout<<"NO\n";
		}else if(judge(temp)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
    }
}
/*
    1   2   3   4   5   6
1   0   1   1   1   1   1
2   1   0   0   0   1   1
3   1   0   0   1   0   1
4   1   0   1   0   1   0
5   1   1   0   1   0   0
6   1   1   1   0   0   0

*/