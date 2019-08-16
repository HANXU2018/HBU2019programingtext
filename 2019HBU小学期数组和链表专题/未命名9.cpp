#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct book{
	string name;
	float price;
};
bool cmp(book a,book b){
	return a.price>b.price;	
}
int main(){
	int n;
	cin>>n;
	book bo[11];
    int min=999999;
    int max=0;
    int mini;
    int maxi;
	for(int i=0;i<n;i++){
		string s;
		getchar();
//		char sr[35];
        //gets(sr);
//        cin.get(sr,35);
//		s=sr;
		getline(cin,s);
		float pri;
		cin>>pri;
		
		bo[i].name=s;
		bo[i].price=pri;
        if(pri>max){
            max=pri;
            maxi=i;
        }
        if(pri<min){
            min=pri;
            mini=i;
        }
        
		
	}/*
	if(n==0){
		printf("%.2f, %s\n",bo[0].price,bo[0].name.c_str());
        return 0;
	}*/
	//sort(bo+0,bo+n,cmp);
	printf("%.2f, %s\n",bo[maxi].price,bo[maxi].name.c_str());
	printf("%.2f, %s",bo[mini].price,bo[mini].name.c_str());
	return 0;
}

/*
#include<stdio.h>
#include<string.h>
struct book{
	char name[31];
	double price;	
}b[10];
int main(){
	int n,i,j,mini=0,maxi=0;
	double min=1000000,max=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("\n");
		gets(b[i].name);
		scanf("%lf",&b[i].price);
		if(b[i].price>max){
			max=b[i].price;
			maxi=i;
		}
		if(b[i].price<min){
			min=b[i].price;
			mini=i;
		} 
	}
	printf("%.2lf, %s\n",b[maxi].price,b[maxi].name);
	printf("%.2lf, %s\n",b[mini].price,b[mini].name);
	return 0;
}

*/
