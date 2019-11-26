#include<iostream>
#include<cmath>
using namespace std; 
int main(){
	double a,ai,b,bi,A,B;
	cin>>a>>ai>>b>>bi;
	A=a*b*cos(ai)*cos(bi)-a*b*sin(ai)*sin(bi);
	B=a*b*cos(ai)*sin(bi)+a*b*sin(ai)*cos(bi);
	if (A + 0.005 >= 0 && A < 0)
        printf("0.00");
    else
        printf("%.2f", A);
    if(B >= 0)
        printf("+%.2fi", B);
    else if (B + 0.005 >= 0 && B < 0)
        printf("+0.00i");
    else
        printf("%.2fi", B);
    return 0;
}
	

