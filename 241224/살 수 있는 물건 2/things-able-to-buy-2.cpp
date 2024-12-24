#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    const int book = 3000, mask = 1000, pen = 500;

    if (money >= 3000)
        cout << "book" << endl;
    else if (money < 3000 && money >= 1000)
        cout << "mast" << endl;
    else if (money < 1000 && money >= 500)
        cout << "pen" << endl;
    else
        cout << "no" << endl;

    
    return 0;
}