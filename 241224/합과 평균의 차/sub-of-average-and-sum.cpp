#include <iostream>
using namespace std;

int main() {
    double a, b, c, ave;
    cin >> a >> b >> c;
    ave = (a + b + c) / 3;
    double sum;
    sum = a + b + c;

    cout << sum << endl << ave << endl << sum - ave << endl;

    return 0;
}