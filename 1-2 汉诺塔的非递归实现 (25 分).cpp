#include<iostream>
#include <stack>
char s[4] = { 'q','a','b','c' };
std::stack<int> a[4];
bool move(int before, int after) {
	if (a[before].empty())
		return false;
	if (!a[after].empty())
		if ((a[after].top() - a[before].top()) < 0)
			return false;
	a[after].push(a[before].top());
	a[before].pop();
	printf("%c -> %c\n", s[before], s[after]);//faster than cout
	return true;
}
int main() {
	int  N, count = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++)
		a[1].push(N - i);
	if (N % 2 == 1) {
		s[2] = 'c'; s[3] = 'b';
	}
	while (++count) {
		move((count - 1) % 3 + 1, (count) % 3 + 1);
		if (!move((count - 1) % 3 + 1, (count + 1) % 3 + 1)&&!move((count + 1) % 3 + 1, (count - 1) % 3 + 1))
				break;
	}
}
