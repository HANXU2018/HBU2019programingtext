#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;


void prefix_table(char pattern[], int prefix[], int n){
	prefix[0]=0;
	int len   = 0;
	int i= 1;
	while(i < n){
		//cout<<i<<" "<<len<<endl;
		if(pattern[i] == pattern[len]){
			len++;
			prefix[i] = len;
			i++;
		}
		else{
			if(len > 0){
				len = prefix[len - 1];
			}
			else{
				prefix[i] = len;
				i++;
			}
		}
	}
}

void move_prefix_table(int prefix[],int n){
	int i;
	for(i=n-1;i>0;i--){
		prefix[i] = prefix[i-1];
	}
	prefix[0] = -1;
}

int  kmp_search(char s[],char target[]){
	int n=strlen(target);
	int m=strlen(s);
	int* prefix = (int *)malloc(sizeof(int)*n);
	//int prefix[n];
	//43	36	C:\Users\hx\Desktop\训练营\基础知识\kmp.cpp	[Error] invalid conversion from 'void*' to 'int*' [-fpermissive]
	prefix_table(target,prefix,n);
	move_prefix_table(prefix,n);
	int i=0;
	int j=0;
	while(i < m){
		if(j==n-1&& s[i]==target[j]){
			//printf("Found pattern at %d\n",i-j);
			
			string s1=s;
			s1=s1.substr(i-j);
			cout<<s1<<endl;
			j=prefix[j];
			return 0;
		}
		if(s[i]==target[j]){
			i++;
			j++;
		}
		else{
			j=prefix[j];
			if(j==-1){
				i++;
				j++;
			}
		}
	}
	printf("Not Found\n");
	return 0;
} 

int main(){
	//char pattern[]="ABABCABAA";
	/*int prefix[9];
	int n=9;
	
	prefix_table(pattern, prefix, n);
	move_prefix_table(prefix, n);
	int i;
	for(i=0;i<n;i++){
		cout<<prefix[i]<<endl;
	}*/
	//char text[]="ABCAB";
	//kmp_search(pattern,text); 
	char s1[1000000];
	char s2[1000000];
	scanf("%s",s1);
	int i2;
	cin>>i2;
	for(int i=0;i<i2;i++){
		scanf("%s",s2);
		kmp_search(s1,s2); 
	} 
	return 0;
}
