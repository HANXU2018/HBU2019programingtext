#include<iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string c;
	cin >>n>>c;
	string str;
    char ch;
    ch=getchar();
    while ((ch = cin.get()) != '\n')
    {
        str = str + ch;
        //cout<<str<<endl;
    }
	int a=str.length();
	//printf("a==%d\n",a);
	if(a>=n){
		string cut = str.substr(a-n,n); 
	cout<<cut;
	return 0;
	}
	while(a<n){
		cout<<c;
		n--;
		//printf("%d",n);
	}
	
	for(int i=a-n;i<n;i++){
		cout<<str[i];
	}
	return 0;
}
