#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int m, t, m1, t1, m2, t2;
		cin >> m >> t >> m1 >> t1 >> m2 >> t2;
		int sum = 0;
		bool m1_flag = true;
		bool m2_flag = true;
		for (int j = 0; j < t; j++) {
			m1_flag = (j / t1) % 2 == 0 ? true : false;
			m2_flag = (j / t2) % 2 == 0 ? true : false;

			sum += m1 * (int)m1_flag - m2 * (int)m2_flag;
			if (sum < 0) sum = 0; 
			if (sum > m) sum = m;
		}
		cout << sum << endl;
	}
	return 0;
}

