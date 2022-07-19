#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void chuanHoa(string& s) {
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		vector<string>v;
		while (ss >> tmp) {
			v.push_back(tmp);
		}
		chuanHoa(v[v.size() - 1]);
		cout << v[v.size() - 1] << ", ";
		for (int i = 0; i < s.size() - 1; i++) {
			chuanHoa(v[i]);
			cout << v[i];
			if (i != v.size() - 2) {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}