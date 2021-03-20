#include<iostream>
using namespace std;
int num[300];
int main(){
    string s;
    cin>>s;
    for(int i= s.size()-1;i>=0;i--){
        if(num[s[i]]==0)num[s[i]]=i;
    }
//    for(int i='a';i<='z';i++){
//    	cout<<num[i]<<" "<<i<<endl;
//	}
    int flag=0;
    for(int i=0;i<s.size();i++){
        if(flag==1){
            break;
        }
        if(s[i]=='a')continue;
        else{
            for(int j='a';j<s[i];j++){
            	
                if(num[j]>i){
				//cout<<num[j]<<": "<<i<<endl;
                    flag=1;
                    s[num[j]]=s[i];
                    s[i]=j;
                    cout<<s<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<s;
    return 0;
}
