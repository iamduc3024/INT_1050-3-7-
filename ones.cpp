#include <iostream>
#include <string>
using namespace std;

int ones(string s) {
	if (s.length() == 1 && s[0] == '1') {
		return 1;
	}
	else if (s.length() == 1 && s[0] == '0') {
		return 0;
	}
	else {
		if (s[s.length() - 1] == '1') {
			return 1 + ones(s.substr(0, s.length() - 1));
		}
		else {
			return ones(s.substr(0, s.length() - 1));
		}
	}
}

int main() {
	string s;
	cin >> s;
	cout << ones(s);
	return 0;
}