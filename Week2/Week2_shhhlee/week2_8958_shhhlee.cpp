#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        int Ocount = 0, score = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'O') {
                Ocount++;
                score += Ocount;
            }
            else
                Ocount = 0;
        }
        cout << score << "\n";
    }
}