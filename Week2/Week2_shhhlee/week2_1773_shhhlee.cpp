#include <iostream>
#include <cstring>
using namespace std;

bool isBomb[2000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, second, count = 0;
    cin >> n >> second;
    for (int i = 0; i < n; i++) {
        int period;
        cin >> period;
        for (int j = period; j <= second; j += period) {
            if (!isBomb[j]) {
                isBomb[j] = true;
                count++;
            }
        }
    }
    cout << count << '\n';
    return 0;
}



