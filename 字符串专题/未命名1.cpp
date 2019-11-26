#include <bits/stdc++.h>
using namespace std;

typedef int Pos;
#define NotFound -1

void BuildMatch(char *pattern, int *match);
Pos KMP(char *str, char *pattern);
int main()
{
	#ifdef ONLINE_JUDGE
	#else
	//freopen("in.txt", "r", stdin);
	#endif
	
	char str[1000001] = {0};
	char pattern[100001] = {0};
	scanf("%s\n", (char *)str);//有修改 
	//gets(str);
	int N;
	scanf("%d", &N);
	int i;
	
	for(i = 0; i < N; i++){
		scanf("%s\n", (char *)pattern);//有修改 
		//gets(pattern);
		
		Pos p = KMP(str, pattern);
		if(p != NotFound){
			
			/*if(i == N - 1){
				printf("%s", str + p);
			}else{
				printf("%s\n", str + p);
			}*/
				printf("%s\n", str + p);
			
		}else{
			
			/*if(i == N -1){
				printf("Not Found");
			}else{
				printf("Not Found\n");
			}*/
				printf("Not Found\n");
		}
	}
 
 	return 0;
} 
void BuildMatch(char *pattern, int *match)
{
	Pos i, j;
	int m = strlen(pattern);
	match[0] = -1;
	
	for(j = 1; j < m; j++){
		i = match[j - 1];
		
		while((i >= 0) && (pattern[i + 1] != pattern[j])){
			i = match[i];
		}
		if(pattern[i + 1] == pattern[j]){
			match[j] = i + 1;
		}else{
			
			match[j] = -1;
		}
	}
}

Pos KMP(char *str, char *pattern)
{
	int n = strlen(str);
	int m = strlen(pattern);
	Pos s = 0, p = 0, *match;
	
	if(n < m) return NotFound;
	match = (Pos *)malloc(sizeof(Pos) * m);
	BuildMatch(pattern, match);
	while(s < n && p < m){
		
		if(str[s] == pattern[p]){
			s++;
			p++;
		}else if(p > 0) p = match[p - 1] + 1;
		else s++;
		
	}
	
	return (p == m) ? (s - m) : NotFound;
}
