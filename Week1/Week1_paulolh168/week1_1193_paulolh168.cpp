#include <iostream>
int main() {
	int num, i;
	std::cin >> num;
	for (i = 1;num >= i + 1;i++)num -= i;
	if (i % 2 == 0) {
		std::cout << num << "/" << i + 1 - num;
	}
	else {
		std::cout << i + 1 - num << "/" << num;
	}
}