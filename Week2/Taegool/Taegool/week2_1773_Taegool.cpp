#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, C, count = 0; //N�� ��� �� C�� �ð�
	cin >> N >> C;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 1; i <= C; i++) { //�־��� �ð� ���� ����
		for (int j = 0; j < N; j++) {
			if (i % v[j] == 0) {
				count++;
				break;
			}
		}

	}
	cout << count;
}