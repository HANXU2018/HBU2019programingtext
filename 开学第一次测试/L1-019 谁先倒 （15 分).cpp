#include<iostream>
using namespace std;

int n;
int a, b;					//两人的酒量 

int main()
{
	cin >> a >> b >> n;
	int aa = a, bb = b;
	int aj, ah, bj, bh;
	for(int i = 1;i <= n;i++){
		cin >> aj >> ah >> bj >> bh;
		int x = aj + bj;
		if(ah == x && bh == x)	continue;
		else if(ah == x)	a--;
		else if(bh == x)	b--;
		if(a < 0){
			cout << "A" << endl << bb - b << endl;
			return 0;
		}	
		else if(b < 0){
			cout << "B" << endl << aa - a << endl;
			return 0;
		}	
	}
	return 0;
}

