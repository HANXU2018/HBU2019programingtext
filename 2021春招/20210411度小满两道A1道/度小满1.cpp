/*
开关电灯
时间限制： 1000MS
内存限制： 65536KB
题目描述：
小A在宾馆打工。一日，小A需要把宾馆一个走廊上n个灯全部关掉。走廊上的灯编号为1~n。宾馆的电路有设计缺陷。宾馆的走廊上有n个开关，第i个开关只可以改变i~n号电灯的状态，即亮的熄灭，熄灭的变亮。 小A一秒按一次开关，一共按了m次。给出小A每次按下的开关编号，请问每一盏灯第一次关掉的时间。一开始，所有灯都是亮着的。



输入描述
输入第一行包含两个数，n,m 接下来一行m个数，代表小A每次按下的开关编号

（n,m≤100000,最后一次按下的开关一定是1号开关。）

输出描述
输出一行n个数，代表每盏电灯最后关掉的时间。


样例输入
4 2
2 1
样例输出
2 1 1 1


*/
#include<iostream>
#include<vector> 
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>num(m);
	vector<int>ans(n,100005);
	int t;
	for(int i=0;i<m;i++){
		cin>>t;
		num[i]=t;
		for(int j=t;j<=n;j++){
			if(i+1<ans[j-1]){
			//	cout<<j-1<<" "<<t<<endl;
				ans[j-1]=i+1;
			}
		}
	} 
	for(int i=0;i<n;i++){
		if(i>0)cout<<" ";
		cout<<ans[i];
	}
	
	return 0;
} 
