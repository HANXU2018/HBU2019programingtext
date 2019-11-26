#include<iostream>
using namespace std;
struct Book{
	int day;
	bool s=false;
	bool e=false;
	int begin,end;
};
Book book[1005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int count=0,minute=0;
		int id;
		char s;
		int h,m;
		while(1){
		scanf("%d %c %d:%d",&id,&s,&h,&m);
		//cout<<id<<s<<h<<m;
		if(id==0){
			if(count==0){
				cout<<"0 0"<<endl;
			}else{
			float av=1.0*minute/count+0.5;
			printf("%d %d\n",count,(int)av);
			//cout<<count<<" "<<(minute)/count<<endl;
		}
			break;
		}
		else{
			if(s=='S'){
				book[id].day=i;
				book[id].s=true;
				book[id].begin=h*60+m;
			}if(s=='E'){
				if(book[id].day==i&&book[id].s==true){
					book[id].s=false;
					book[id].end=h*60+m;
					count++;
					minute=minute+book[id].end-book[id].begin;
				}
			}
		}
	}
	}
	return 0;
}
