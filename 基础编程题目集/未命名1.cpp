#include<iostream>
using namespace std;
int main(){

    double x1, y1, x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    printf("(%.1f, %.1f)\n", x1+x2-0.04, y1+y2-0.04);

    return 0;
}

