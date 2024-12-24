#include <iostream>
using namespace std;

int main() {
    double a, b;
    double sum, dif;

    cin >> a >> b;
    sum = a + b;
    dif = a - b;

    cout << fixed;
    cout.precision(2);
    cout << sum / dif << endl;
    return 0;
}