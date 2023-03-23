#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int p = 1;
	int q = 0;
	int r = 0;
    for (int i = 0; i <= n; i++) {
        p += i;
        if (n - p < i + 1) {
            q = n % p;
            p = i + 1;
            r = i + 1;
            break;
        }
    }
    p -= q;
    q += 1;
    if (r % 2 == 0) {
        cout << q << "/" << p;
    }
    else
        cout << p << "/" << q;
}