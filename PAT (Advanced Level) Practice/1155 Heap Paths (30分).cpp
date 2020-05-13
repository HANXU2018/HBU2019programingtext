#incldue<iostream>
#include<vector>
using namespace std;
vector<int>v;
 int a[10009],n,isMin =1 ,isMax =1;
int main(){
	scanf("%d",&n);
	for(int i =1; i<=n;i++){
		scanf("%d",&a[i]);
	}
	v.push_back(a[1]);
	dfs(1);
	for(int i = 2;)
}
