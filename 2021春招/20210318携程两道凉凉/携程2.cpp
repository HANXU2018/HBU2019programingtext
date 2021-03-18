#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;

int cha(string sa,string sb){
	int na = sa.length();
	int nb = sb.length();
//	int a=0,b=0;
	int sum=0;

	vector<vector<int > > dp(na+1,vector<int>(nb+1));
	for(int i=1;i<=na;i++)dp[i][0]=dp[i-1][0]+sa[i-1];
	for(int i=1;i<=nb;i++)dp[0][i]=dp[0][i-1]+sb[i-1];
	dp[0][0]=0;
	for(int i= 1;i<=na;i++){
		for(int j=1;j<=nb;j++){
			dp[i][j] = min(dp[i-1][j]+sa[i-1],dp[i][j-1]+sb[j-1]);
			int r = (sa[i-1] == sb[j-1]) ? 0 : (sa[i-1]+sb[j-1]);
			//cout<<i-1<<" "<<j-1<<" ++++++++++"<<r<<endl;
			//cout<<r<<"------"<<endl;
			if(sa[i-1] == sb[j-1]){
				//cout<<"equal"<<endl;
				//cout<<dp[i][j]<<" "<<dp[i-1][j-1]+r<<endl;
				if(dp[i-1][j-1]+r>dp[i][j]){
						dp[i][j]= 	dp[i][j];
				}else{
						dp[i][j]=dp[i-1][j-1]+r;
				}
				//dp[i][j] == min(dp[i-1][j-1]+r,dp[i][j]);
				//cout<<i<<" "<<j<<"dp:"<<dp[i][j]<<endl;
			}
//			if(sa[i-1]==sb[j-1]){
//				dp[i][j]=dp[i-1][j-1];
//			}else{
//				dp[i][j] = min(dp[i-1][j-1]+sa[i-1]+sb[j-1],min(dp[i-1][j]+sa[i-1],dp[i][j-1]+sb[j-1]));
//				cout<<dp[i][j]<<"-------"<<endl;
//			} 
		}
	}
	return dp[na][nb];
}
/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^ 
******************************开始写代码******************************/
int calcSimilarity(vector < string > name1, vector < string > name2) {

	int n1 = name1.size();
	int n2 = name2.size();
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
		}
		//cout<<cha(name1[i],name2[i])<<endl;
		//cout<<"-------------"<<endl;
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

