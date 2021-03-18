/*
2
Zhang
San
2
Zhan
Ai
*/
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;
string sa,sb;
int getask(string s){
	int ans =0;
	for(int i=0;i<s.length();i++){
		ans+=s[i];
	}
	//cout<<s<<" "<<ans<<endl;
	return ans;
}
int dp(int a,int b){
	cout<<a<<" "<<b<<"----"<<endl;
	if(a>=sa.length()){
		if(b>=sb.length()){
			return 0;
		}
		int count =0;
		for(b;b<sb.length();b++){
			count+=sb[b];
		}
		return count;
	}
	if(b>=sb.length()){
		int count =0;
		for(a;a<sa.length();a++){
			count+=sa[a];
		}
		cout<<count<<"~~~~~~~"<<endl;
		return count;
	}
	
	if(sa[a]==sb[b]){
		return dp(a+1,b+1);
	}
	int sum = 0;
	int ta=a,tb=b;
	
		int pp = 0;
		int minnum = 99999;
		for(a=a+1;a<sa.length();a++){
			sum+=sa[a-1];
			if(sa[a]==sb[b]){
				pp = dp(a,b);
				if(minnum>sum+pp)minnum=sum+pp;
			}
			
		}
		sum+=sa[a];
		if(minnum>sum+getask(sb.substr(b))){
			minnum = sum+getask(sb.substr(b));
		}
		
		int sumb=0;
			for(b=b+1;b<sb.length();b++){
			sumb+=sb[b-1];
			if(sa[ta]==sb[b]){
				pp = dp(ta,b);
				if(minnum>sumb+pp)minnum=sumb+pp;
			}
			
		}
		sumb+=sb[b];
		if(minnum>sumb+getask(sa.substr(ta))){
			minnum = sum+getask(sb.substr(ta));
		}
		
		
		return minnum;
	
}
int cha(string s1,string s2){
	int minans = 99999;
	if(s1.length() == 0){
		return getask(s2);
	}
	if(s2.length() == 0){
		return getask(s1);
	}
	int a=0,b=0;
	sa=s1,sb=s2;
	for(b=0;b<s2.size();b++){
		int tt = dp(a,b);
		cout<<tt<<endl;
		if(tt<minans){
			minans = tt;
		}
	}
	return minans;
}



/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^ 
******************************开始写代码******************************/
int calcSimilarity(vector < string > name1, vector < string > name2) {
	//cout<<(char)90<<endl;
	int n1 = name1.size();
	int n2 = name2.size();
//	cout<<n1<<" "<<n2 <<endl;
//	for(int i=0;i<n1;i++){
//		cout<<name1[i]<<endl;
//	}
//	for(int i=0;i<n2;i++){
//		cout<<name2[i]<<endl;
//	}
	
	int ans = 0;
	int p = n1;
	if(p<n2)p=n2;
	for(int i=0;i<p;i++){
		if(n1>i&&n2>i){
			ans+=cha(name1[i],name2[i]);
		}else if(n1<=i&&n2>i){
			ans+=cha("",name2[i]);
		}else if(n1>i&&n2<=i){
			ans+=cha(name1[i],"");	
		}cout<<ans<<endl;
	}

return ans; 
}



/******************************结束写代码******************************/


int main() {
    int res;

    int _name1_size = 0;
    cin >> _name1_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<string> _name1;
    string _name1_item;
    for(int _name1_i=0; _name1_i<_name1_size; _name1_i++) {
        getline(cin, _name1_item);
        _name1.push_back(_name1_item);
    }
    int _name2_size = 0;
    cin >> _name2_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<string> _name2;
    string _name2_item;
    for(int _name2_i=0; _name2_i<_name2_size; _name2_i++) {
        getline(cin, _name2_item);
        _name2.push_back(_name2_item);
    }
    res = calcSimilarity(_name1, _name2);
    cout << res << endl;

    return 0;

}

