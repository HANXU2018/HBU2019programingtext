#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>t;
        ans[i]=t;
    }
    int mmax=0;
	        int mmaxcount=0;
    for(int i=1;i<n;i++){
        int flag=0;
        int count=2;
        int sum=1;
        
        for(int p=i;p<n;p++){
        	if(ans[p]-ans[p-1]==0){
        		break;
			} 
            if(ans[p]-ans[p-1]>0){
                if(flag==0){
                	if(p+1<n&&ans[p+1]-ans[p]>0){
                		 flag=1;
                    	count--;
                    	sum++;
					}else if(p+1<n&&ans[p+1]-ans[p]<0){
						flag=-1;
						count=2;
						sum++;
					}
                   
                }else if(flag==1){
                      count--;
                    sum++;
                    if(count==0){
                        count=2;
                        flag=-flag;
                    }else if(count<0){
                        break;
                    }
                    if(sum>mmaxcount)mmaxcount=sum;
                    
                }else{
                    break;
                }
                
                
            }else{
                if(flag==0){
                    if(p+1<n&&ans[p+1]-ans[p]<0){
                		flag=-1;
                    	count--;
                    	sum++;
					}else if(p+1<n&&ans[p+1]-ans[p]>0){
						flag=1;
						count=2;
						sum++;
					}
                }else if(flag==-1){
                     count--;
                    sum++;
                    if(count==0){
                        count=2;
                        flag=-flag;
                    }else if(count<0){
                        break;
                    }  
                     if(sum>mmaxcount)mmaxcount=sum;
                }else{
                    break;
                }
                
            }
        }
    }
    if(mmaxcount<5){
    	cout<<0<<endl;
	}else{
		cout<<mmaxcount<<endl;
	}
    
    return 0;
}
