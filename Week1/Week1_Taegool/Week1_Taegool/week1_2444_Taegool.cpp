#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;


	//»ó´Ü »ï°¢Çü
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		
		for (int k = 0; k < 2 * i + 1; k++) {
			cout << "*";
		}
		cout << '\n';
	}


	//ÇÏ´Ü »ï°¢Çü
	for (int i = n; i > 0; i--) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}

		for (int k = 0; k < 2 * i - 1; k++) {
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}	
