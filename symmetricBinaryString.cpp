#include <iostream>
#include <string>
using namespace std;

int check(string s);
int main() {
	string s;
	cin >> s;
	if (check(s)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

int check(string s) {
	if (s.length() == 1) {
		return 1;
	}
	else {
		int i = 0;
		if (s[i] == s[s.length() - 1]) {
			return 1;
		}
		else {
			return 0;
		}
		return check(s.substr(i + 1, s.length() - 2 - i));
	}
}