#include<iostream>
#include<vector> 
using namespace std;
	int s1[100];
	int s2[100];
int main(){
	int a,b;
	cin>>a>>b;
	if(a<b){
		int t=a;
		a=b;
		b=t;
	}//长的a做出栈，b做入栈 
	/*思路：输入两个堆栈的长度，
	长度短的作为输入栈，
	长度长的作为输出栈，
	如果输入栈满了并且输出栈不是空的，
	此时为栈满，
	其他情况都可以输入。
	当输入栈满了，
	输出栈为空时，
	就可以将输入栈的元素全部转移到输出栈，
	再向输入栈添加元素。
	*/
	
	char c;
	int s1count=0;//输出站 
	int s2count=0;//输入站 
	while(cin>>c&&c!='T'){
		if(c=='A'){
			int n;
			cin>>n;
			if(s1count>0&&s2count==b+1){
				//沾满
				cout<<"ERROR:Full"<<endl; 
			}
			else if(s1count==0&&s2count==b){
					while(s2count>=0){
						s1[s1count++]=s2[s2count-1];
						s2count--;
						cout<<s1count<<"==s1count"<<endl;
							cout<<s2count<<"==s2count"<<endl;
					}
				//	cout<<"***"<<s2count<<endl; 
					s2[(++s2count)++]=n;
					
				}
			else{
				s2[s2count++]=n;
			}
		}
		else if(c=='D'){
			cout<<s1count<<" "<<s2count<<endl; 
			if(s1count==0&&s2count==0){
				cout<<"ERROR:Empty"<<endl; 
			}
			else if (s1count==0){
				while(s2count!=0){
						s1[s1count++]=s2[s2count--];
				}
			}
			if(s1count>0){
				cout<<s1[--s1count]<<endl;
			}
		}
		cout<<"-------------"<<endl;
		for(int i=0;i<b;i++){
			
			cout<<s1[i]<<" "<<s2[i]<<endl;
		}
		cout<<s1count<<" "<<s2count<<endl; 
		cout<<"-------------"<<endl;
	
	} 
	
	return 0;
}
