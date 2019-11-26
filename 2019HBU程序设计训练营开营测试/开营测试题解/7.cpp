#include"bits/stdc++.h"
using namespace std;
#define N 1010
queue <int> qa;
queue <int> qb;//两个队列a，b
int main()
{
    int x,i,l,flaga=0,flagb=0,flag=0;//flaga判断a队是否出队两个，flagb判断b队是否出队1个
    cin>>l;
    for(i=0;i<l;i++){
        cin>>x;
        if(x%2==1)
           qa.push(x);
        else
            qb.push(x);
	//奇数进a队，偶数进b队
    }
    for(i=0;i<l;){//输出l个数据
        while(!qa.empty()&&flaga!=2){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
	    //如果是第一个数据，直接输出，否则输出空格后再输出数据
            cout<<qa.front();//输出队头数据
            qa.pop();//出队
            ++flaga;
            i++;
        }flaga=0;
        while(!qb.empty()&&flagb!=1){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
            cout<<qb.front();
            qb.pop();
            ++flagb;
            i++;
        }flagb=0;
    }





    return 0;
}
