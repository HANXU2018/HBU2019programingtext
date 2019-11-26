#include<iostream>
using namespace std;
int quan[17]{7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char yanzheng[11]={'1','0','x','9','8','7','6','5','4','3','2'};
int main(){
	int n,flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		int flag3=1;
		cin>>s;
		int count=0;
		for(int i=0;i<17;i++){
			if(s[i]<'0'||s[i]>'9'){
				flag3=0;
			}
			count+=quan[i]*(s[i]-'0');
		}
		count=count%11;
		cout<<count;
		if(s[17]==yanzheng[count]&&flag3){
			flag++;
		}else{
			cout<<s<<endl;
		}
	}if(flag==n){
		cout<<"All passed";
	}
	return 0;
} 
