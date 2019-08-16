#include <iostream>
#include <string>
using namespace std;
int out(){
	string s;
	if(cin>>s){
	out();	
	}
	else{
		cout<<s;
		return 0;
	}
	cout<<s<<" ";
}
int main()
{
    string S1;
    cin>>S1;
    out();
    cout<<S1;
    return 0;
}
