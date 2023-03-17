#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int x;
	cin >> x;
	
	int cur = 1, line = 1;
	while (cur+line-1 < x) {
		cur += line;
		line++;	
	}
	int n = x - cur + 1;
	int m = (line + 1) - n;
	if (line % 2) swap(m, n);
	cout << n << "/" << m;
}