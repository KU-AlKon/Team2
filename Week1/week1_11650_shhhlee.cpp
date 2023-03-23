#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	typedef pair<int, int> pr;
	int n;
	cin >> n;
	vector<pr> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
}