#include"bits/stdc++.h"
using namespace std;
#define N 1010
queue <int> qa;
queue <int> qb;//��������a��b
int main()
{
    int x,i,l,flaga=0,flagb=0,flag=0;//flaga�ж�a���Ƿ����������flagb�ж�b���Ƿ����1��
    cin>>l;
    for(i=0;i<l;i++){
        cin>>x;
        if(x%2==1)
           qa.push(x);
        else
            qb.push(x);
	//������a�ӣ�ż����b��
    }
    for(i=0;i<l;){//���l������
        while(!qa.empty()&&flaga!=2){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
	    //����ǵ�һ�����ݣ�ֱ���������������ո�����������
            cout<<qa.front();//�����ͷ����
            qa.pop();//����
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
