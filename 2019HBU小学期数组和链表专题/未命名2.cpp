#include<bits/stdc++.h>
using namespace std;
const int N=0xfffff;
int main()
{
	long long int n,i;
	scanf("%lld",&n);
	if(n==1)
	{
		printf("1=1\n");
	}
	else if(n>1)
	{
		cout<<n<<"=";
		for(i=2;i<=N;i++)
		{
			long long int x=0,t=0;
			while(n%i==0)
			{
				t=i;
				n=n/i;
				x++;
			}
			if(t)
			{
				cout<<t;
				if(x>1)
				{
					printf("^%d",x);
				}
				if(n>1)
				{
					cout<<"*";
				}
			}
		}
	}
	return 0;
}
