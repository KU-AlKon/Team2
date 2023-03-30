#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, C, count = 0; //N은 사람 수 C는 시간
	cin >> N >> C;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 1; i <= C; i++) { //주어진 시간 동안 진행
		for (int j = 0; j < N; j++) {
			if (i % v[j] == 0) {
				count++;
				break;
			}
		}

	}
	cout << count;
}