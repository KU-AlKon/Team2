#include <iostream>
void repeat(int num,char c);
int main() {
	int num;
	std::cin >> num;
	for (int i = num - 1; abs(i)<num ;i--) {       
		repeat(abs(i), ' ');					
		repeat( 2*(num - abs(i))-1, '*');
		std::cout << "\n";
	}
}

void repeat(int num, char c) {
	for (int j = num;j > 0;j--) std::cout << c;
}
