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

	if (i % 2 == 1) { //È¦¼ö¹øÂ°
		cout << i - n + 1 << "/" << n;

	}
	else //Â¦¼ö¹øÂ°
		cout << n << "/" << i - n + 1;
}