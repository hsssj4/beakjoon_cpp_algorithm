#include <iostream>
using namespace std;
int main(){
    int N, count = 1;
    cin >> N;
    while(N>1){
        N = N - 6 * count;
        count++;
    }
    cout << count;
}
//6 12 18
//6~11
//2번째 6개
//3번째 12개
//6n 등차수열의 합