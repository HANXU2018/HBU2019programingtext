#include<iostream>
using namespace std;
float f()
{
   char A[10];
   cin>>A; 
if(A[1]==NULL )
   {
   switch(A[0])
   {
   case'*': return f()*f();  
   case'/': 
	   {
        float fenzi,fenmu;
		fenmu=f();
		fenzi=f();
        if(fenzi==0)
		{
		 cout << "ERROR"<<endl;
		 exit(0);
		}
        else return fenmu/fenzi;
	}
   case'-': return f()-f();
   case'+': return f()+f();
   default: return atof(A);
   }
   }
   else
   {
     if(A[0]=='+' || A[0]=='-')
	 {
        char flag=A[0];
		int i=0;
        while(A[i])
		{     
         A[i]=A[i+1];
         i++;
		}
        if(flag=='-')
		return 0-atof(A);
		else
		return atof(A);
 
	 }
     else return atof(A);
   }
};

int main(){
	float sum=f();
	printf("%.1f",sum);
	
	return 0;
} 
