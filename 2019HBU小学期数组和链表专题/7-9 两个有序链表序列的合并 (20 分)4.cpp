#include<iostream>
#include <queue>
using namespace std;


int main(){
	queue<int> q,p;
    /*q.push(4);
    q.push(5);
    printf("%d\n",q.front());
    q.pop();*/
    int t;
    int count=0;
    cin>>t;
    while(t!=-1){
    	q.push(t);
    	cin>>t;
    	count++;
	}
	if(count==0){
		printf("NULL");
		return 0;
	}
	q.push(-1);
	cin>>t;
	while(t!=-1){
    	p.push(t);
    	cin>>t;
    	count++;
	}
	p.push(-1);
	int a,b;
	while(count>1){
        
		if(q.front()<=p.front()&&q.front()!=-1){
			printf("%d ",q.front());
			count--;
			q.pop();
		}
		else if(p.front()<=q.front()&&p.front()!=-1){
			printf("%d ",p.front());
			p.pop();
			count--;
		}
		if(q.front()==-1&&p.front()!=-1){
			printf("%d ",p.front());
			count--;
			p.pop();
		}
		if(p.front()==-1&&q.front()!=-1){
			printf("%d ",q.front());
			count--;
			q.pop();
		}
		
	}
	if(q.front()==-1&&p.front()!=-1){
			printf("%d",p.front());
			count--;
			p.pop();
		}
		if(p.front()==-1&&q.front()!=-1){
			printf("%d",q.front());
			count--;
			q.pop();
		}
	cout<<"*";
	return 0;
	
}
