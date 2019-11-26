#include<iostream>
#include<algorithm>
using namespace std;
int sum[105];
int person[105];
struct zong{
	int a;
	int b;
};
zong z[1000];
int cou=0;
int cmp(zong z1,zong z2){
	if(z1.a==z2.a){
		return z1.b<z2.b;
	}else{
		return z1.a<z2.a;
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sum[i];
	}//存入信息
	for(int i=1;i<=n;i++){
		//撒谎狼人循环
		for(int k=1;k<=n;k++){//撒谎好人循环 
			if(k==i){
				continue;
			}
			//判断能否出答案
			for(int l=1;l<=n;l++){
				//清零
				person[l]=0;
			} 
			for(int l=1;l<=n;l++){
				
				//存入推理信息
				if(l==i||l==k){
					int s=sum[l];//撒谎的人说的
					if(s<0){
						//撒谎的说是坏人，就是好人 
						if(person[-s]==-1 ){
							person[i]=1;
						}
						person[-s]=1; 
					} else{
						// 撒谎的说是好人，就是坏人 
						if(person[s]==1 ){
							person[i]=1;
						}
						person[s]=-1;
					}
					
				} 
				else{
					
					int s=sum[l];//撒谎的人说的
					if(s<0){
						if(person[-s]==1 ){
							person[i]=1;
						}
						//说是坏人，就是坏人 
						person[-s]=-1; 
					} else{
						// 说是好人，就是好人 
						if(person[s]==-1 ){
							person[i]=1;
						}
						person[s]=1;
					}
				} 
				
				
			}
			if(person[i]==0){
				person[i]=-1;
			}
			if(person[i]!=-1){
				continue;
			}
			//推一下，有没有答案
				int huai[100];
				int huaicount=0;
				for(int l=1;l<=n;l++){
					//printf("%2d ",person[l]); 
					if(person[l]==-1){
						huai[huaicount++]=l;
					}
				}  
				//cout<<endl;
				if(huaicount==2){
					//cout<<"判断"<<huai[0]<<" "<<huai[1]<<"sahuang"<<i<<" "<<k<<endl;
					if(huai[0]!=k&&huai[1]!=k){
						if(huai[0]==i||huai[1]==i){
							//cout<<huai[0]<<" "<<huai[1]<<endl;
							z[cou].a=huai[0];
							z[cou++].b=huai[1];
							
							//return 0;
						}
					}
				}
		} 
	} 
	sort(z+0,z+cou,cmp);
	if(cou>0){
		cout<<z[0].a<<" "<<z[0].b;
		return 0;
	}
	cout<<"No Solution";
	return 0;
} 
