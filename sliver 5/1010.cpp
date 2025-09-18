/*
mCn =
*/
#include <iostream>
using namespace std;
int main() {
	int t;
	int n, m, l = 1, result = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		result = 1, l = 1;
		cin >> n >> m;
		while (n != 0) {
			result = result * m / l;
			m--;
			n--;
			l++;
		}
		cout << result << endl;
	}
}