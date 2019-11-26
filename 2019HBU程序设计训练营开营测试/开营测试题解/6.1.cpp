#include<bits/stdc++.h>
#define ll long long
using namespace std;
char ls[100010];
int main() {
    int n;
    char c;
    cin >>n>>c;
    int len = 0;
    getchar();
    while((ls[len]=getchar())!='\n')
    {
        len++;
    }
    for(int i = 0;i<n-len;++i){
        cout<<c;
    }
    int i = len-n;
    if(i<0)i=0;
    for(;i<len;++i){
        cout<<ls[i];
    }
}
