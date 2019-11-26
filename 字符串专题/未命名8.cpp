#incldue<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int k=1;
	for(int i=0;i<s.length();i++){
		if(s[i]-'0'>=0&&s[i]-'0'<='9'){
			if(k){
				cout<<s[i];
				k=0;
			}
			else{
				cout<<" "<<s[i];
			}
		}
		
	}
	return 0;
}
