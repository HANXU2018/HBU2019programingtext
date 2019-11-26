#include<iostream>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n>>s;
	//¼ÆËãÐÐÊý 
	int hang=1;
	n=n-1;
	for(hang;n>=0;hang++){
		n=n-(((hang+1)*2)-1)*2;
	//	cout<<n<<endl;
	} 
	n+=(hang*2-1)*2;
	hang--;
	for(int i=0;i<hang;i++){
		for(int k=0;k<i;k++){
			cout<<" ";
		}
		for(int k=0;k<(hang-i)*2-1;k++){
			cout<<s;
		}
		cout<<endl;
	}
	for(int i=1;i<hang;i++){
		for(int k=i+1;k<hang;k++){
			cout<<" ";
		}
		for(int k=0;k<(i*2+1);k++){
			cout<<s;
		}
		cout<<endl;
	}
	cout<<n;
	return 0;
}
