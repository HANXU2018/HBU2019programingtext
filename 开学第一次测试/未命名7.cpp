#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int a_t=a,b_t=b;
	int N;
	scanf("%d",&N);
	while(N--)
	{
		int a_shout,b_shout,a_del,b_del;
		scanf("%d %d %d %d",&a_shout,&a_del,&b_shout,&b_del);
		int sum=a_shout+b_shout;
		if(a_del==sum&&b_del!=sum)
			a--;
		else if(b_del==sum&&a_del!=sum)
			b--;
		if(a<0||b<0)
		 break;
	 } 
	 if(a<0)
	  {
	  	printf("%c\n",'A');
	  	printf("%d",b_t-b);
	  }
	  else{
	  	printf("%c\n",'B');
	  	printf("%d",a_t-a);
	  }
	  
	
	return 0;
}
