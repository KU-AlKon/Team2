#include <bits/stdc++.h>

using namespace std;


void move(int n, int start, int end) {
    cout << start << " " << end  << "\n";
}

void hanoi(int n, int start, int end, int sub) {
    if (n == 1) {
        move(1, start, end);
        return;
    }
    else {
        hanoi(n - 1, start, sub, end);
        move(n, start, end);
        hanoi(n - 1, sub, end, start);
    }
}


int main() {
    int n;
    cin >> n;
    cout << (int)pow(2, n) - 1 << '\n';
    hanoi(n, 1, 3, 2);
}