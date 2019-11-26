#include<iostream>
using namespace std;
int sum1[999999],sum2[999999],s1,s2,d1,d2;
int main(){
	int n,flag=0;
	while(cin>>n&&n!=-1){
		sum1[s1++]=n;
	}while(cin>>n&&n!=-1){
		sum2[s2++]=n;
	}while(d1!=s1&&d2!=s2){
		if(sum1[d1]==sum2[d2]){
			if(flag){
			cout<<" ";
			}flag=1;
			cout<<sum1[d1];
			d1++;
			d2++;
		}else{
			if(sum1[d1]<sum2[d2]){
				d1++;
			}else{
				d2++;
			}
		}
		
	}
	return 0;
}
