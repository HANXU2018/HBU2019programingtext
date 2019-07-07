#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    char res;
    if(t>=90){
        res = 'A';
    }
    else if(t>=80){
        res = 'B';
    }
    else if(t>=70){
        res = 'C';
    }
    else if(t>=60){
        res = 'D';
    }
    else{
        res = 'E';
    }
    cout<<res;
}
