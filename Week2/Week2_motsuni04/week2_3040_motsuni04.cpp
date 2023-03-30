#include <iostream>
#include <numeric>   

using namespace std;


int main() {
    int nums[9];
    for (int i = 0; i < 9; i++) {
        cin >> nums[i];
    }
    int sum = accumulate(nums, nums+9, 0);
    int a, b;
    for (a = 0; a < 8; a++) {
        for (b = a+1; b < 9; b++) {
            if (nums[a] + nums[b] == sum - 100) goto fin;
        }
    }
    fin:
    for (int i = 0; i < 9; i++) {
        if (!(i == a || i == b)) cout << nums[i] << '\n';
    }
    return 0;
}