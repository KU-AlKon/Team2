#include <iostream>
int main() {
	unsigned long long n, f, g;
	std::cin >> n;
	if (!n) {
		std::cout << 0;
		return 0;
	}
	for (f = 1, g = 3037000500; f <= g;)
		if (((f + g) / 2 - 1) * ((f + g) / 2 - 1) >= n)
			g = (f + g) / 2 - 1;
		else if (((f + g) / 2) * ((f + g) / 2) < n)
			f = (f + g) / 2 + 1;
		else {
			std::cout << (f + g) / 2;
			return 0;
		}
}