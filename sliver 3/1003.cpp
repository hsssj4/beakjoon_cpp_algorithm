#include <iostream>
using namespace std;
class fibo_num {
public:
	long long value = 0;
	int zero = 0;
	int one = 0;
};
void fibonachi(int);
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if (k == 0) {
			cout << "1 0" << endl;
			continue;
		}
		else if (k == 1) {
			cout << "0 1" << endl;
			continue;
		}
		fibonachi(k);
	}
}
void fibonachi(int value) {
	fibo_num arr[40];
	arr[0].zero = 1;
	arr[1].one = 1;
	for (int i = 2; i <= value; i++) {
		arr[i].zero = arr[i - 1].zero + arr[i - 2].zero;
		//cout << i << "zero: " << arr[i].zero << endl; 
		arr[i].one = arr[i - 1].one + arr[i - 2].one;
		//cout << i << "one: " << arr[i].one << endl;
	}
	cout << arr[value].zero << ' ' << arr[value].one << endl;
}