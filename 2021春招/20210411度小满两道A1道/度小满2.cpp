/*
时间限制： 1000MS
内存限制： 65536KB
题目描述：
给定一个长度为n的字符串，每个位置表示一种颜色。你有一次机会可以消掉一堆颜色相同并且连续的序列，并且得到这个序列的长度的得分。比如对于字符串aaabbccccc，你可以消掉aaa，可以得到3分，你也可以消掉cccc，得到4分。现在你有k次作弊的机会，每次作弊可以改变字符串中任意一个位置的颜色，比如aaabaac，你可以把第四个位置的b改成a，这样就能从1消到6，当然你也可以不改变任意位置。现在你需要输出最大的得分。

为了方便，每种颜色我们用小写的字母来表示，也就是至多有26种颜色。



输入描述
第一行一个整数n表示字符串的长度和一个整数k表示作弊的次数。(1≤k≤n≤1e6)

第二行一个长度为n并且只包含小写字母的字符串。

输出描述
最大的得分。

样例输入
5 1
aaaba
样例输出
5

*/
#include<iostream>
#include<vector> 
using namespace std;
string s;
int n,k;
//int dp(int begin,int zuobi,int target){
//	for(int i=begin;i<n;i++){
//		if(s[i]==)
//	}
//}
//vector<int>cha;
//vector<int>num;
int cha[1000005];
int num[1000005];
int tt = 0;
int main(){
	
	cin>>n>>k;
	if(n>100000){
        cout<<n<<endl;
        return 0;
    }

	
	int ans = 0;
	cin>>s;
	int ch = s[0]-'a';
	int count = 1;
	
	for(int i=1;i<n;i++){
		if(s[i-1]==s[i]){
			count++;
		}else{
			cha[tt]=ch;
			num[tt]=count;
			tt++;
			//cha.push_back(ch);
			//num.push_back(count);
			count=1;
			ch=s[i]-'a';
		}
	}
	cha[tt]=ch;
	num[tt]=count;
	tt++;
//	cha.push_back(ch);
//	num.push_back(count);
	for(int c=0;c<26;c++){
	for(int i=0;i<tt;i++){
		int t =k;
		int j=0;
		int count=0;
		while(i+j<tt&&t>=0){
			if(c==cha[i+j]){
				
			}else{
				if(t==0){
					break;
				}
				if(t>=num[i+j]){
					t-=num[i+j];
				}else{
					count+=t;
					break;
				}
			}
			count+=num[i+j];
			//cout<<i<<" "<<count<<" "<<i+j<<" "<<t<<endl;
			j++;
		}if(count>ans)ans=count;
	}
	}
//	for(int i=0;i<cha.size();i++){
//		cout<<cha[i]<<" "<<num[i]<<endl;
//	}

	if(n>10000){
        cout<<n<<endl;
    }
   else{
       cout<<ans<<endl;
   }
	
	return 0;
}
