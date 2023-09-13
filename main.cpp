#include<iostream>
#include<vector>

using namespace std;

int main() {
	char c, l;
	vector<int> v;
	cin >> l;
	v.push_back(0);

	int s = 0;
	while (cin.get(c) && c != '\n') {
		s += (c == l);
		l = c;
		v.push_back(s);
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		r--; l--;
		cout << v[r] - v[l] << '\n';
	}
}
