#include <iostream>
using namespace std;

string solve(string s, int left, int right) {
	if (right <= left) return s;
	else
	{
		swap(s[left], s[right]);
		return solve(s, left + 1, right - 1);
	}

}
int main() {
	string s; cin >> s;

	int left = 0, right = s.length() - 1;
	cout << solve(s, left, right) << endl;

	return 0;
}