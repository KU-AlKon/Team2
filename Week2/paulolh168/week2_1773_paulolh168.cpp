#include <iostream>
int main()
{
	int st, ti, result = 0, per[100], arr[2000001] = { 0 };
	std::cin >> st >> ti;
	for (int i = 0;i < st;i++)std::cin >> per[i];
	for (int i = 0;i < st;i++) {
		for (int j = 1;per[i] * j <= ti;j++)arr[per[i] * j]++;
	}
	for (int i = 1;i <= ti;i++) {
		if (arr[i] != 0)result++;
	}
	std::cout << result;
}