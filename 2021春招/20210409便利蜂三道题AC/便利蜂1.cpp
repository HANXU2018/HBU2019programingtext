#include<iostream>
#include<stack>
using namespace std;
	stack<int>num;
	stack<string>str;
	string ji(int a,string t){
		string ss = "";
		for(int i=0;i<a;i++){
			ss+=t;
		}
		return ss;
	}
string dp(string s){
	if(s==""){
		return "";
	}
	string ans;
	int n = 0;
	int i=0;
	for(i=0;i<s.size();i++){
		if(s[i]>='0'&&s[i]<='9'){
			n=n*10+s[i]-'0';
		}else{
			break;
		}
	}
	ans = s.substr(i);
		//cout<<n<<" "<<ans<<endl;
	if(n==0){
		//cout<<ans<<endl; 
		if(ans[0]=='{'){
		int t=0;
		int count = 0;
		for(;t<ans.size();t++){
			if(ans[t]=='{'){
				count++; 
			}else if(ans[t]=='}'){
				count--;
			}
			if(count==0){
				return dp(ans.substr(1,t-1))+dp(ans.substr(t+1));
				break;
			}
		}
	}
		for(int o=0;o<ans.size();o++){
			if(ans[o]>='0'&&ans[o]<='9'){
				return ans.substr(0,o)+dp(ans.substr(o));
				break;
			}
		}
		return ans;
	}
	if(ans.length()==0){
		//cout<<n<<endl;
		return to_string(n);
	}
	if(ans[0]=='{'){
		int t=0;
		int count = 0;
		for(;t<ans.size();t++){
			if(ans[t]=='{'){
				count++; 
			}else if(ans[t]=='}'){
				count--;
			}
			if(count==0){
				break;
			}
		}
		//cout<<t<<endl;
		string tt = ans;
		ans = ji(n,dp(ans.substr(1,t-1)))+dp(ans.substr(t+1));
	}else{
		return ji(n,ans);
	}
	return ans;
}
int main(){
	string s;
	cin>>s;
	
	cout<<dp(s);
	return 0;
} 
