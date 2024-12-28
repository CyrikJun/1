#include <iostream>
using namespace std;

int main() {
    int N, a;
    cin >> N;


    while (N--){
        cin >> a;
        if(a % 2 == 1 && a % 3 == 0)
        cout << a << endl;
    }
    return 0;
}