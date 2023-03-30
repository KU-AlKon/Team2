#include <iostream>
int main() {
	int arr[9], sum = 0;
	for (int i = 0;i < 9;i++)std::cin >> arr[i];
	for (int i = 0;i < 9;i++)sum += arr[i];
	for (int i = 0;i < 9;i++) {
		for (int j = i + 1;j < 9;j++) {
			if (sum - arr[i] - arr[j] == 100) {
				arr[i] = 0;
				arr[j] = 0;
				break;
			}
		}
		if (arr[i] == 0) {
			break;
		}
	}
	for (int i = 0;i < 9;i++)if (arr[i] != 0)std::cout << arr[i] << "\n";
}