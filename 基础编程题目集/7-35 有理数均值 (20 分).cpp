#include<iostream>
using namespace std;
int yueshu(int a,int b){
	int i=a;
	for(i;i>1;i--){
		if(a%i==0&&b%i==0){
			return i;
		}
	}
	return 1;
	
}
int main(){
	int n;
	cin >> n;
	int fenzi;
	int fenmu;
	scanf("%d/%d",&fenzi,&fenmu);
	//printf("%d/%d",fenzi,fenmu);
	for(int i=1;i<n;i++){
		
		int a,b;
		scanf("%d/%d",&a,&b);
		int yue=yueshu(b,fenmu);
		a=a*fenmu;
		b=b*fenmu;
		fenmu=fenmu*b;
		fenzi=fenzi*b;
		//printf("a==%d/b==%d\n",a,b);
		fenzi=fenzi+a;
		//printf("%d/%d\n",fenzi,fenmu);
		yue=yueshu(fenzi,fenmu);
		fenzi=fenzi/yue;
		fenmu=fenmu/yue;
		//printf("%d/%d\n",fenzi,fenmu);
	}
	fenmu=fenmu*n;
	int y=yueshu(fenzi,fenmu);
	fenzi=fenzi/y;
	fenmu=fenmu/y;
	if(fenmu==0){
		printf("%d",fenzi);
	}
	else{
		printf("%d/%d",fenzi,fenmu);
	}
	return 0;
}
