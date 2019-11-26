#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
	string str;
	getline(cin,str);
	char c;
	while((c=getchar())!='\n'){
		str.erase( remove( str.begin(),  str.end(),  c ),  str.end() );
	}
	cout<<str;
	return 0;
}
