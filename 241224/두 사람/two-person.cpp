#include <iostream>
using namespace std;

int main() {
    int age1, age2;
    char P1, P2;
    cin >> age1 >> P1 >> age2 >> P2;

    if(age1 >= 19 && P1 == 'M' || age2 >= 19 && P2 == 'M')
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}