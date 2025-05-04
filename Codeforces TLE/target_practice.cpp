#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        // Calculate absolute difference between a and b
        int diff = abs(a - b);

        // Each move can change a by up to 10 (either add or subtract)
        // So minimum number of moves = ceil(diff / 10.0)
        int moves = (diff + 9) / 10; // Equivalent to ceil(diff / 10)
        
        cout << moves << endl;
    }
    return 0;
}
