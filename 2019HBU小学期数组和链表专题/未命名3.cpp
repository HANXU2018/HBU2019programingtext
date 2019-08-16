
#include<stdio.h>
int main()
{
	int n,i,x=0,flag=0;
	scanf("%d",&n);
	for(i=1;;i++)
	{
		x=x*10+1;
		if(x>=n)
		{
			flag=1;
			printf("%d",x/n);
		}
		else if(flag==1) printf("0");
		x=x%n;
		if(x==0) break;
	}
	printf(" %d",i);
	return 0;
}
