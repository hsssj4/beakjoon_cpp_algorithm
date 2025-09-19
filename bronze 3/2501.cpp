#include <iostream>
using namespace std;
int main(){
	int n,k,count=0;
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		if(n%i == 0){
			count++;
		}
		if(k==count){
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;
}