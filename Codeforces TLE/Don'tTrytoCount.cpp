#include <iostream>
#include <string>
using namespace std;

bool isSubstring(const string &x, const string &s) {
    if (s.size() > x.size()) return false;
    for (int i = 0; i <= x.size() - s.size(); ++i) {
        bool match = true;
        for (int j = 0; j < s.size(); ++j) {
            if (x[i + j] != s[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string x, s;
        cin >> n >> m;
        cin >> x >> s;
        
        int operations = 0;
        bool found = false;
        
        if (isSubstring(x, s)) {
            cout << 0 << endl;
            continue;
        }
        
        while (x.size() <= 100) {
            x += x;
            operations++;
            if (isSubstring(x, s)) {
                found = true;
                break;
            }
        }
        
        cout << (found ? operations : -1) << endl;
    }
    return 0;
}