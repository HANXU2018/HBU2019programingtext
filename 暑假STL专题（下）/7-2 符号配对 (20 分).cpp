#include <bits/stdc++.h>
using namespace std;
stack<char> sta;
vector<char> v;
bool judge(char &c){
    if(c == '(' || c == ')' || c == '{' || c == '}' || c == '[' || c == ']' || c == '/' || c == '*') return true;
    return false;
}
map<char,char>m;
int main(){
    string s;
    char c;
    m['('] = ')';m[')'] = '(';
    m['{'] = '}';m['}'] = '{';
    m['['] = ']';m[']'] = '[';
    m['<'] = '>';m['>'] = '<';//��ֵ�� 
    while(1){
        getline(cin,s);
        if(s == ".") break;
        for(int i = 0; i < s.size(); ++i){
            c = s[i];
            if(judge(c)) v.push_back(c);
        }//����� 
    }
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == '{' || v[i] == '(' || v[i] == '[') sta.push(v[i]);
        else if(v[i] == '}' || v[i] == ')' || v[i] == ']'){
            if(sta.empty()){
                printf("NO\n?-%c",v[i]);
                return 0;
            }
            if(m[sta.top()] != v[i]){
                if(sta.top() != '<')
                printf("NO\n%c-?",sta.top());
                else printf("NO\n/*-?");
                return 0;
            } sta.pop();
        }//�����ջ���Ҳ��ж� 
        else if(v[i] == '/' && v[i+1] == '*'){
            i++;
            sta.push('<');
        }
        else if(v[i] == '*' && v[i+1] == '/'){
            if(sta.empty()){
                printf("NO\n?-*/");
                return 0;
            }
            if(sta.top() != '<'){
                printf("NO\n%c-?",sta.top());
                return 0;
            }
            i++;
            sta.pop();
        }//��/**/�������� 
    }
    if(!sta.empty()){
        if(sta.top() == '{' || sta.top() == '(' || sta.top() == '['){
            printf("NO\n%c-?",sta.top());
            return 0;
        }
        if(sta.top() == '<'){
            printf("NO\n/*-?",sta.top());
            return 0;
        }
    }
    cout << "YES\n";
}
