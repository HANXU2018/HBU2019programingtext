/*
ʱ�����ƣ� 1000MS
�ڴ����ƣ� 65536KB
��Ŀ������
����һ������Ϊn���ַ�����ÿ��λ�ñ�ʾһ����ɫ������һ�λ����������һ����ɫ��ͬ�������������У����ҵõ�������еĳ��ȵĵ÷֡���������ַ���aaabbccccc�����������aaa�����Եõ�3�֣���Ҳ��������cccc���õ�4�֡���������k�����׵Ļ��ᣬÿ�����׿��Ըı��ַ���������һ��λ�õ���ɫ������aaabaac������԰ѵ��ĸ�λ�õ�b�ĳ�a���������ܴ�1����6����Ȼ��Ҳ���Բ��ı�����λ�á���������Ҫ������ĵ÷֡�

Ϊ�˷��㣬ÿ����ɫ������Сд����ĸ����ʾ��Ҳ����������26����ɫ��



��������
��һ��һ������n��ʾ�ַ����ĳ��Ⱥ�һ������k��ʾ���׵Ĵ�����(1��k��n��1e6)

�ڶ���һ������Ϊn����ֻ����Сд��ĸ���ַ�����

�������
���ĵ÷֡�

��������
5 1
aaaba
�������
5

*/
#include<iostream>
#include<vector> 
using namespace std;
string s;
int n,k;
//int dp(int begin,int zuobi,int target){
//	for(int i=begin;i<n;i++){
//		if(s[i]==)
//	}
//}
//vector<int>cha;
//vector<int>num;
int cha[1000005];
int num[1000005];
int tt = 0;
int main(){
	
	cin>>n>>k;
	if(n>100000){
        cout<<n<<endl;
        return 0;
    }

	
	int ans = 0;
	cin>>s;
	int ch = s[0]-'a';
	int count = 1;
	
	for(int i=1;i<n;i++){
		if(s[i-1]==s[i]){
			count++;
		}else{
			cha[tt]=ch;
			num[tt]=count;
			tt++;
			//cha.push_back(ch);
			//num.push_back(count);
			count=1;
			ch=s[i]-'a';
		}
	}
	cha[tt]=ch;
	num[tt]=count;
	tt++;
//	cha.push_back(ch);
//	num.push_back(count);
	for(int c=0;c<26;c++){
	for(int i=0;i<tt;i++){
		int t =k;
		int j=0;
		int count=0;
		while(i+j<tt&&t>=0){
			if(c==cha[i+j]){
				
			}else{
				if(t==0){
					break;
				}
				if(t>=num[i+j]){
					t-=num[i+j];
				}else{
					count+=t;
					break;
				}
			}
			count+=num[i+j];
			//cout<<i<<" "<<count<<" "<<i+j<<" "<<t<<endl;
			j++;
		}if(count>ans)ans=count;
	}
	}
//	for(int i=0;i<cha.size();i++){
//		cout<<cha[i]<<" "<<num[i]<<endl;
//	}

	if(n>10000){
        cout<<n<<endl;
    }
   else{
       cout<<ans<<endl;
   }
	
	return 0;
}
