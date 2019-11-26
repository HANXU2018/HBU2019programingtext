#include <iostream>
#include<cstring>
 
using namespace std;
 
 
int get (string hand,string a[]){//用于把初始三个字符串转换成不含[]的三个string数组
    int k=0;
    for(int i=0;i<hand.size();i++){
        if(hand[i]!='['&&hand[i]!=' '&&hand[i]!=']')
            a[k]+=hand[i];
            if(a[k]=='/'){
            	a[l]+='/';
			}
        if(hand[i]==']')
            k++;    
    }
    return k;
}
 
 
string s[3];
string shou[11],yan[11],kou[11];
int main()
{	
	for (int i=0;i<3 ;i++ )
	{
		getline(cin,s[i]);
	}
	
	int len1=get(s[0],shou);
	int len2=get(s[1],yan);
	int len3=get(s[2],kou);
	
	int N;
	cin>>N;
	int num[N][5];
	for (int i=0;i<N ;i++ )
	{
		for (int j=0;j<5 ;j++ )
		{
			cin>>num[i][j];
		}
	}
 
 
	for (int i=0;i<N ;i++ )
	{
		int a=num[i][0],b=num[i][1],c=num[i][2],d=num[i][3],e=num[i][4];
		 //  就是这里要加上大于0 的判断
		if (a<=len1 && b<=len2 && c<=len3 && d<=len2 && e<=len1&&a>0&&b>0&&c>0&&d>0&&e>0)
		{
			cout<<shou[a-1]<<"("<<yan[b-1]<<kou[c-1]<<yan[d-1]<<")"<<shou[e-1]<<endl;
		}
		else cout<<"Are you kidding me? @\\/@"<<endl; // 注意这里\ 转义字符 要加\  
	}
 
 
	return 0;
}}
	
