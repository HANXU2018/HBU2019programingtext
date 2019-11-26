#include<iostream>
using namespace std;
struct ti{
	int select;
	int cishu;
	int daannum;
	int daan[6];
	int score;
};
ti t[105];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int da,max,select;
		cin>>max>>select>>da;
		t[i].daannum=da;
		t[i].select=select;
		for(int l=0;l<da;l++){
			char c;
			scanf(" %c",&c);
			t[i].daan[l]=c;
		}scanf("\n");
	}
	for(int i=0;i<n;i++){
		int scor=0;
		for(int l=0;l<m;l++){
			int p,flag=1;
			if(l!=0){scanf("(%d",p);
			}else{
				scanf("(%d",p);
			}
			
			for(int o=0;o<p;o++){
				int tl;
				char c;
				scanf(" %c",&c);
				tl=c;
				if(tl==t[l].daan[o]){
				}else{
					flag=0;
					t[l].cishu++;
				}
			} 
			if(flag==1&&p<t[l].daannum){
				flag=0;
				t[l].cishu++;
			}
			if(flag==1){
				scor+=t[l].score;
			}
			scanf(") ");
		}
		scanf("\n");
		cout<<scor;
	}
	return 0;
}
