/*
mCn = 
*/
#include <iostream>
using namespace std;
int main(){
	int t;
	int n, m, result=1;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n >> m;
		while(n != 0){
			result = result * m / n;
			m--;
			n--;
		}
		cout << result << endl;
	}

}