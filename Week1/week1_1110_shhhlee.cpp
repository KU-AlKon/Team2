#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	int tmp = n;
    do {
        int a = tmp / 10 + tmp % 10;
        tmp = 10 * (tmp % 10) + a % 10;
        count++;
    } while (tmp != n);
    cout << count;
}