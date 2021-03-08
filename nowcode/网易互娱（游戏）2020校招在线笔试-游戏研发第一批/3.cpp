#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m, t, m1, t1, m2, t2, sum=0;
        cin>>m>>t>>m1>>t1>>m2>>t2;
        int o1=1,o2=1;
        for(int a=1;a<=t;a++){
           if(o1==1){
               sum+=m1;
           } 
            if(o2==1){
                sum-=m2;
            }
            if(sum<0)sum=0;
            if(sum>m)sum=m;
            if(a%m1==0){
                o1=-o1;
            }if(a%m2==0){
                o2=-o2;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
