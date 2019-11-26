#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm> 
using namespace std;
bool cmp(int a,int b){
	return a>b; 
}
int main(){
	int N;
	scanf("%d",&N);
	int n=sqrt(N);
	int m;
	while(n%n!=0){
		n--;
	}m=N/n;
	vector<int>a(N);
	 vector<vector<int> > b(m, vector<int>(n));
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}sort(a.begin(),a.end(),cmp);
	int t=0;
	for(int i=0;i<(int)((m+1)/2);i++){
		 for (int j = i; j <= n - 1 - i && t <= N - 1; j++)
                b[i][j] = a[t++];
        for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++)
                b[j][n - 1 - i] = a[t++];
        for (int j = n - i - 1; j >= i && t <= N - 1; j--)
                b[m - 1 - i][j] = a[t++];
        for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--)
                b[j][i] = a[t++];
	}
	
	 for (int i = 0; i < m; i++) {
        for (int j = 0 ; j < n; j++) {
            printf("%d", b[i][j]);
            if (j != n - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
} 
