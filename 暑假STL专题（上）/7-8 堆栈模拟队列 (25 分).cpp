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
	}//����a����ջ��b����ջ 
	/*˼·������������ջ�ĳ��ȣ�
	���ȶ̵���Ϊ����ջ��
	���ȳ�����Ϊ���ջ��
	�������ջ���˲������ջ���ǿյģ�
	��ʱΪջ����
	����������������롣
	������ջ���ˣ�
	���ջΪ��ʱ��
	�Ϳ��Խ�����ջ��Ԫ��ȫ��ת�Ƶ����ջ��
	��������ջ���Ԫ�ء�
	*/
	
	char c;
	int s1count=0;//���վ 
	int s2count=0;//����վ 
	while(cin>>c&&c!='T'){
		if(c=='A'){
			int n;
			cin>>n;
			if(s1count>0&&s2count==b+1){
				//մ��
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
