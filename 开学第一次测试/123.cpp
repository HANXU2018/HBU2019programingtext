#include<iostream>

using namespace std;

int main()
{
	int A,B,asum,bsum,n;
	cin >> A >> B;
	asum=0;bsum=0;
	cin >> n;
	while(n--)
	{
		int anum,ahua,bnum,bhua;
		int sum;
		cin >> anum >> ahua >> bnum >> bhua;
		sum=anum+bnum;
		//A win && B lose
		if(sum==ahua&&sum!=bhua)
			asum++;
		//B win && A lose
		if(sum==bhua&&sum!=ahua)
			bsum++;
		//A lose
		if(asum>A)
		{
			cout << "A\n" << bsum << endl;
			break;
		}
		if(bsum>B)
		{
			cout << "B\n" << asum  << endl;
			break;
		}
	}
	return 0;
}
