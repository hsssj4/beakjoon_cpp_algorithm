#include <iostream>
using namespace std;
int main()
{
    int a, b, v, day;
    cin >> a >> b >> v;
    
    if ((v-a)%(a-b) == 0){
        day = ((v-a)/(a-b))+ 1;
    }else{
        day = ((v-a)/(a-b))+ 2;
    }

    cout << day;
}
// (A-B)*day < V <= A + (A-B)*day
// day = (v-a)/(a-b)+1
//
// 3 1 10
// 답:5 수식:4