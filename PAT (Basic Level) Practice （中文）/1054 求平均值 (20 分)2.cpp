#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char a[50];
	double sum=0.0,temp;
	char b[50];
	int cnt=0;
	
	for(int i=0;i<n;i++){
		scanf("%s",a);
		sscanf(a,"%.lf",temp);
		sprintf(b,".2f",b);
		int flag=0;
		for(int j=0;j<strlen(b);j++){
			if(a[j]!=b[j]){
				flag=1;
			}
		}
		if(flag||temp<-1000||temp>1000){
			printf("ERROR: %s is not a legal number\n", a);
			continue;
		}else{
			sum+=temp;
			cnt++;
		}
	}
	if(cnt==1)
		printf("The average of 1 number is %.2f", sum);
	else if(cnt > 1)
        printf("The average of %d numbers is %.2f", cnt, sum / cnt);
    else
        printf("The average of 0 numbers is Undefined");
    return 0;
}
