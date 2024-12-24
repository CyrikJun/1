#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int mid = 0;

    cin >> a >> b >> c;

    if (a > b && b > c || a < b && b < c) {
        mid = b;
        cout << mid << endl;
    } else if (a > b && c > a || a < b && c < a) {
        mid = a;
        cout << mid << endl;
    } else {
        mid = c;
        cout << mid << endl;
    }

    return 0;
}