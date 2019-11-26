#include<iostream>
using namespace std;
struct test{
	int id;
	int count;
	float score;
	int s1;
	bool s[200];
	int s2[5];
};
int main(){
	int a,b;
	cin>>a>>b;
	test t[105];
	for(int i=1;i<=b;i++){
		int i1,i2,i3;
		cin>>i1>>i2>>i3;
		t[i] .id=i;
		t[i].s1=i3;
		t[i].score=i1;
		for(int l=0;l<i3;l++){
			char c;
			cin>>c;
			t[i].s[c]=1;
		}
	}
	for(int i=1;i<=a;i++){
		float sum=0;
		for(int l=1;l<=b;l++){
			
			int n;
			getchar();
			getchar();
			cin>>n;
			int coun=0;
			int flag=0;
			for(int k=0;k<n;k++){
				char c;
				cin>>c;
			//	cout<<" -"<<c-97 <<"-";
				if(t[l].s[c]==1){
				//	cout<<c<<endl;
					coun++;
				}
				else{
					t[l].s2[c]++;
					flag=1;
				}
			}
			getchar();
			if(flag){
				//cout<< coun <<" *"<<t[l].s1<<"*"<<endl;
				sum+=0;
			}else{
				//cout<< coun <<" *"<<t[l].s1<<"*"<<endl;
				if(coun>=t[l].s1){
					sum+=t[l].score;
					
				}else{
					sum+=t[l].score*0.5;
				}
			}
			
		}
		printf("%.1f\n",sum);
	}
	return 0;
}
