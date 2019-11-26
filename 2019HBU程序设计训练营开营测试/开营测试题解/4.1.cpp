#include<bits/stdc++.h>
#define ll long long
using namespace std;
char ls[88];
int main() {
    int len = 0;
    while((ls[len]=getchar())!='\n')
    {
        len++;
    }
    sort(ls,ls+len);
    printf("%c",ls[0]);
    for(int i = 1;i<len;++i)
    {
        if(ls[i]==ls[i-1])
            continue;
        printf("%c",ls[i]);
    }
}
