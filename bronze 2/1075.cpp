#include <iostream>
using namespace std;
int main() {
	int n, f, i;
	cin >> n >> f;
	n = (n / 100) * 100; //1331 1300~1399
	for (i = 0; i <= 99; i++) {
		n += i;
		if (n % f == 0)
			break;
		n -= i;
	}
	if (i < 10){
		cout << '0' << i;
	}
	else
		cout << i;
}