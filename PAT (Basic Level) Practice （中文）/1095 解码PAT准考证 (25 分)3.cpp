//lichuo ´óÀÐµÄ´úÂë
#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

struct Node{
    string t;
    int value;
};

bool cmp(const Node &a,const Node &b){
    return a.value != b.value ? a.value > b.value : a.t < b.t;
}

int main(){
    int n,m,score,num;
    string s;
    cin >> n >> m;
    vector<Node> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i].t >> v[i].value;
    for(int i = 1; i <= m; i++){
        cin >> num >> s;
        printf("Case %d: %d %s\n",i,num,s.c_str());
        vector<Node> ans;
        int cnt = 0,score = 0;
        if(num == 1){
            for(int j = 0; j < n; j++){
                if(v[j].t[0] == s[0]) ans.push_back(v[j]);
            }
        }else if(num == 2){
            for(int j = 0; j < n; j++){
                if(v[j].t.substr(1,3) == s){
                    cnt++;
                    score += v[j].value;
                }
            }
            if(cnt != 0) printf("%d %d\n",cnt,score);
        }else if(num == 3){
            unordered_map<string,int> m;
            for(int j = 0; j < n; j++){
                if (v[j].t.substr(4, 6) == s) m[v[j].t.substr(1, 3)]++;
                }
            for (auto it : m) ans.push_back({it.first, it.second});
        }
        sort(ans.begin(),ans.end(),cmp);
        for(int j = 0; j < ans.size(); j++){
            printf("%s %d\n",ans[j].t.c_str(),ans[j].value);
        }
        if(((num == 1 || num == 3) && ans.size() == 0) || (num == 2 && cnt == 0))
          printf("NA\n");
    }
    return 0;
}
