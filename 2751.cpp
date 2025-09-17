#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, a[1000000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int j = i; j > 0; j--) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}