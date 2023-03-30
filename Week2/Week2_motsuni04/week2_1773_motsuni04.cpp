#include <iostream>
#include <numeric>

using namespace std;

int firework[2000000] = {0};

int main () {
    int n, c;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        for (int j = d-1; j < c; j+=d) {
            firework[j] = 1;
        } 
    }
    cout << accumulate(begin(firework), end(firework), 0);
    return 0;
}
