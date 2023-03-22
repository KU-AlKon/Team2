#include <iostream>

using namespace std;

int main() {
	int n;
	int first;
	int count = 0;
	cin >> n;
	first = n;

	do {
		// (n % 10) * 10는 1의 자릿수가 들어오면 10자릿수 만들어 줌. 1의 자릿수가 아니더라도 해당 수의 1의 자릿수를 10의 자릿수로 만듬
		// ((n / 10) + (n % 10)) % 10는 분리해서 합한 값의 1의 자릿수를 1의 자릿수에 더해줌.
		n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;

		count++; // 사이클 수 증가
	} while (n != first);

}