#include<iostream>
#include<map>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(c>=a){
		cout<<"Keep going...";
		return 0;
	}
	string s;
	map<string,bool> name;
	for(int i=1;i<=a;i++){
		cin>>s;
		if(i==c){
			if(name[s]==true)//�н�λ�õ��й������������ң�֪���ҵ�û�н��� 
				cin>>s;
				c++;
				continue;
			}
			
			name[s]=true;
			cout<<""<<s<<endl;
			c=c+b;
		}
			
	}
	return 0;
}
