#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a / b << ".";
    // 3 7 
    a %= b;

    for(int i = 0; i < 20; i++){
        a *= 10;

        cout << a / b;

        a %= b;
    }
    return 0;
}