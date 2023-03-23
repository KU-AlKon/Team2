#include <bits/stdc++.h>

using namespace std;

bool cmp(pair <int, int> p1, pair <int, int> p2) {
	if (p1.first == p2.first) 
		return p1.second < p2.second; 
	return p1.first < p2.first;
}

int main() {
	int n;
	vector<pair<int, int>> vec;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vec.push_back(make_pair(a, b));
	}

	sort(vec.begin(), vec.end(), cmp);

	for (auto i : vec) {
		cout << i.first << " " << i.second << "\n";
	}
}