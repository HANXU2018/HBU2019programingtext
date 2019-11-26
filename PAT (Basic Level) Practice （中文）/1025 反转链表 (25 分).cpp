#include<iostream>
using namespace std;
struct node{
	int latst=-1;
	int data;
	int next;
};
node n[100005];
int main(){
	int a,b,c;
	int flag=0;
	cin>>a>>b>>c;
	c=c%b;
	for(int i=0;i<b;i++){
		int d,e,f;
		cin>>d>>e>>f;
		n[d].data=e;
		n[d].next=f;
		n[f].latst=d;
		
	}
	/*
	1.存信息 
	2.每c个输出一次
	3.输出剩下的 
	*/
	int begin=a;
	int d=c;
	while(b>=c){
		
		while(--c>0){
			begin=n[begin].next;
		}
		
		a=n[begin].next;//a接剩下的 
		for(int i=0;i<d;i++){
			if(flag==0){flag=1;
				printf("%05d %d ",begin,n[begin].data);
			}else{
				printf("%05d\n%05d %d ",begin,begin,n[begin].data);
			}
			begin=n[begin].latst;//往回走； 
		}c=d;b=b-c;
		//cout<<"c=="<<c<<"b=="<<b<<endl;
		begin=a;
	} 
	//cout<<"tiaochu"<<endl;
	begin=a;
	while(b>0){
		b--;
		//printf("%05d\n%05d %d ",begin,begin,n[begin].data);
			
		if(flag==0){flag=1;
				printf("%05d %d ",begin,n[begin].data);
			}
		else{
				printf("%05d\n%05d %d ",begin,begin,n[begin].data);
			}
	
		begin=n[begin].next;
	}
	cout<<-1;
	return 0;
}

