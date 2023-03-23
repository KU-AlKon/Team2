#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n, k, i = 1;
	cin >> n;
	k = n;
	for (;;i++) {
		k = (k%10)*10 + (k/10+k%10)%10;
		if (k == n) {
			break;
		}
	}
	cout << i;
}