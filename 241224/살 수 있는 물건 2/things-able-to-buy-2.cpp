#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    const int book = 3000, mask = 1000, pen = 500;

    if (money >= book)
        cout << "book" << endl;
    else if (money < book && money >= mask)
        cout << "mask" << endl;
    else if (money < mask && money >= pen)
        cout << "pen" << endl;
    else
        cout << "no" << endl;

    
    return 0;
}