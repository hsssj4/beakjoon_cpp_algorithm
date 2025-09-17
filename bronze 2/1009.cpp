#include <iostream>
using namespace std;
int main() {
	int t;
	int a, b, result = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		result = 1;
		cin >> a >> b;
		for (int j = 0; j < b; j++) {
			result = result * a;
			result = result % 10;
		}
		if (result == 0) {
			result = 10;
		}
		cout << result << endl;
	}
}