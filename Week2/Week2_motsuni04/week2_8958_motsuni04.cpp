#include <iostream>
#include <string>

using namespace std;

int main() {
    int loop;
    cin >> loop;
    for (int i = 0; i < loop; i++) {
        string x;
        int combo = 0, score = 0;
        cin >> x;
        for (char &c: x) {
            switch (c)
            {
            case 'O':
                combo++;
                score += combo;
                break;
            case 'X':
                combo = 0;
                break;
            }
        }
        cout << score << '\n';
    }
    return 0;
}