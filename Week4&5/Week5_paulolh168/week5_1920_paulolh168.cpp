#include <iostream>
#include <algorithm>
int arr[100000];
int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int n, m, k;
    std::cin >> n;
    for (int i = 0; i < n; i++)std::cin >> arr[i];
    std::sort(arr, arr + n);
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        std::cin >> k;
        std::cout << std::binary_search(arr, arr + n, k) << "\n";
    }
}