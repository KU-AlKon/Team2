#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;

	while (n > i) {
		n -= i;
		i++;
	}

	if (i % 2 == 1) { //Ȧ����°
		cout << i - n + 1 << "/" << n;

	}
	else //¦����°
		cout << n << "/" << i - n + 1;
}