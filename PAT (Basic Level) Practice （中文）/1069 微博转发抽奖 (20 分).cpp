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
			if(name[s]==true)//中奖位置的中过奖，就往后找，知道找到没中奖的 
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
