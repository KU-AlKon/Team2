#include <iostream>
int arr[10000];
long long n, k, big, s, e, res;
int main() {
	std::cin >> k >> n;
	std::cin >> arr[0];
	big = arr[0];
	for (int i = 1; i < k; i++) {
		std::cin >> arr[i];
		if (arr[i] > big) big = arr[i];
	}
	s = 1; e = big;
	while (s <= e) {
		long long mid = (s + e) / 2;
		long long m = 0;
		for (int i = 0; i < k; i++)
			m += arr[i] / mid;
		if (m >= n) {
			res = mid;
			s = mid + 1;
		}
		else
			e = mid - 1;

	}
	std::cout << res;
}