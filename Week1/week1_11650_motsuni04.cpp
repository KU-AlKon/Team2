#include<iostream>
#include<algorithm>
using namespace std;

struct Vector {
	int x;
	int y;	
};

bool cmp(Vector a, Vector b) {
	return (a.x == b.x)? (a.y < b.y) : (a.x < b.x);
}

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	cin >> n;
	Vector arr[n];
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		Vector pos = {x, y};
		arr[i] = pos;
	}
	
	sort(arr, arr+n, cmp);
	
	for (auto &i: arr) {
		cout << i.x << " " << i.y << "\n";
	}
}