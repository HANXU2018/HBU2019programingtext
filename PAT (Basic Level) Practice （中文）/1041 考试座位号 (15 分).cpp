#include<iostream>
using namespace std;
struct stu{
	string id;
	int b;
};
stu stu[1005];
int main(){
	int n ,a,b;
	string c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c>>a>>b;
		stu[a].id=c;
		stu[a].b=b; 
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cout<<stu[a].id<<" "<<stu[a].b<<endl;
	}
	return 0;
}
