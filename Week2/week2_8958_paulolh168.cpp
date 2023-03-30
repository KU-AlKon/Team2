#include <iostream>
#include <string>
#define n arr[i+1]-arr[i]
int main() {
	int num;
	std::cin >> num;
	for (int k = 0;k < num;k++) {
		int result = 0, j = 1;
		int arr[80] = { 0 };
		std::string str;
		std::cin >> str;
		for (int i = 0;i < str.length();i++) {
			if (str[i] != str[i + 1]) {
				arr[j] = i + 1;
				j++;
			}
		}
		if (str[0] == 'O') {
			for (int i = 0;i < j - 1;i += 2)result += (n) * ((n)+1) / 2;
		}
		else {
			for (int i = 1;i < j - 1;i += 2) result += (n) * ((n)+1) / 2;
		}
		std::cout << result << "\n";
	}
}