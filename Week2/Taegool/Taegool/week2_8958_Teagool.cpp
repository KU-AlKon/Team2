#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		int sum = 0;
		int count = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') {
				count++;
				sum += count;
			}
			else
				count = 0;
		}
		cout << sum << "\n";
	}


}