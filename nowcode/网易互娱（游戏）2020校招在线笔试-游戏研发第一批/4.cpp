#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;
		vector<int> res;
		int max = -1;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] != 'N') res.push_back(j);
		}
		if (res.size() <= 2) cout << str.size() << endl;
		else
		{
			max = res[2];
			for (int k = 3; k < res.size(); k++) {
				max = (res[k] - res[k - 3] - 1) > max ? res[k] - res[k - 3] - 1 : max;
			}
			max = str.size() - res[res.size() - 3] - 1 > max ? str.size() - res[res.size() - 3] - 1 : max;
			cout << max << endl;
		}
	}
	return 0;
}

