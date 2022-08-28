#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (; n >= 1; n--) {
        cout << n << endl;
        if (n % 5 == 0) {
            cout << "Beep" << endl;
        }
    }
    return 0;
}
