#include <iostream>
using namespace std;

void solve(string s, int open, int close, int n)
{
	if (s.length() == n) {
		cout << s << endl; return;
	}
	else if (open >= n / 2) {

		solve(s + ")", open, ++close, n);
	}
	else if (open > close) {
		//close++;
		solve(s + ")", open, ++close, n);

		//close--; open++;
		solve(s + "(", ++open, --close, n);
	}
	else {

		solve(s + "(", ++open, close, n);
	}

}
int main() {
	int n; cin >> n;
	solve("", 0, 0, n);
	return 0;
}