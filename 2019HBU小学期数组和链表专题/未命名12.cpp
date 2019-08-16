
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
#define MAXN 100010
 
typedef struct Stu{
    string stuNum;
    string name;
    int grade;
};
struct Stu student[MAXN];
 
bool cmp1(Stu a,Stu b)
{
    return a.stuNum<b.stuNum;
}
 
bool cmp2(Stu a,Stu b)
{
    if(a.name == b.name)
        return a.stuNum<b.stuNum;
    else return a.name<b.name;
}
 
bool cmp3(Stu a,Stu b)
{
    if(a.grade == b.grade)
        return a.stuNum<b.stuNum;
    else return a.grade<b.grade;
}
 
int main()
{
    int n,a;
    cin>>n>>a;
    for(int i = 0;i<n;i++)
    {
        cin>>student[i].stuNum>>student[i].name>>student[i].grade;
    }
    if(a==1)
        sort(student,student+n,cmp1);
    else if(a==2)
        sort(student,student+n,cmp2);
    else
        sort(student,student+n,cmp3);
    for(int i = 0;i<n;i++)
    {
        cout<<student[i].stuNum<<" "<<student[i].name<<" "<<student[i].grade<<endl;
    }
    return 0;
}
 
