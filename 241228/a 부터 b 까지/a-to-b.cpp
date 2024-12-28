#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    while(a <= b)
    if(a % 2 == 0){
        cout << a << " ";
        a += 3;
    } else if (a % 2 == 1){
        cout << a << " ";
        a *= 2;
    }
    return 0;
}