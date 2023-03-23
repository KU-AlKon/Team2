#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main() {
	int num;
	std::cin >> num;
	std::vector<std::pair<int, int>> v(num);
	for (int i = 0;i < num;i++)std::cin >> v.at(i).first >> v.at(i).second;
	std::stable_sort(v.begin(), v.end());
	for (int i = 0;i < num;i++) std::cout << v.at(i).first <<" " << v.at(i).second << "\n";
}
