
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ji[1005];
	int ou[1005];
	int ke;
	int a=0,b=0;
	for(int i=0;i<n;i++){
		cin>>ke;
		
		if(ke%2==1){
			ji[a]=ke;
			//printf("\n%d����%d\n ",a,ji[a]);
			a++;
		}
		else{
			ou[b]=ke;
		//	printf("\n%dż��%d\n ",b,ou[b]);
			b++;
		}
	}
	//���
	int q=0,w=0;
	while(n>0){
		//�����������
		if(a>q){
			if(n==1){
			cout <<ji[q];
			return 0;	
			}
			cout <<ji[q]<<" ";
			q++;
			n--;
		} 
		if(a>q){
			if(n==1){
			cout <<ji[q];
			return 0;	
			}
			cout <<ji[q]<<" ";
			q++;
			n--;
		} 
		//���һ��ż��
		 if(b>w){
		 if(n==1){
			cout <<ou[w];
			return 0;	
			}
			cout <<ou[w]<<" ";
			w++;
			n--;
		} 
	}

}