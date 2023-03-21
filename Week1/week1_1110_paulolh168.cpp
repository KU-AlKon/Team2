#include <iostream>
int main() {
	int num1,i=0;
	std::cin >> num1;
	int check = num1;
	while (1) {
		i++;
		num1 = (num1 / 10 + num1 % 10) % 10+ num1 % 10*10;
		if (num1 == check) break;
	}
	std::cout << i;
}
