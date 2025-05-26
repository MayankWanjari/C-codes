#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int year;
        cin >> year;

        int root = sqrt(year);
        if (root * root != year) {
            cout << -1 << endl;
            continue;
        }

        bool found = false;
        for (int a = 0; a <= root; ++a) {
            int b = root - a;
            cout << a << " " << b << endl;
            found = true;
            break;
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
