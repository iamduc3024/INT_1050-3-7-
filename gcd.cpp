#include <iostream>
using namespace std;

int gcd(int a, int b);
int main() {
	int a, b;
	cin >> a >> b;
	if (a < 0) {
		a *= -1;
	}
	if (b < 0) {
		b *= -1;
	}
	cout << gcd(a, b);
	return 0;
}

int gcd(int a, int b) {
	if (a == 0) {
		return b;
	}
	else if (a > b) {
		return gcd(b, a);
	}
	else if (a % 2 == 0 && b % 2 == 0) {
		return 2 * gcd(a / 2, b / 2);
	}
	else if (a % 2 == 0 && b % 2 == 1) {
		return gcd(a / 2, b);
	}
	else {
		return gcd(a, b - a);
	}
}