#include<iostream>
#include<set>
using namespace std;
int main()
{
    int num,n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(s.upper_bound(num)!=s.end())
            s.erase(s.upper_bound(num));
        s.insert(num);
	}
    cout<<s.size()<<endl;
    return 0;
}
