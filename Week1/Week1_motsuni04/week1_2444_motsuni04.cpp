#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	cin >> n; 
	for(int i = 1; i < 2*n; i++) {
		for(int j = 0; j < abs(n-i); j++) printf(" ");
		for(int j = 0; j < 2*n-1-abs(n-i)*2; j++) printf("*");
		printf("\n");
	}
	return 0;
}
