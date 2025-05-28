#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    vector<int> b(m);
    for (int j = 0; j < m; ++j) {
        cin >> b[j];
    }
    sort(a.begin(), a.end());
 
 
    for (int j = 0; j < m; ++j) {
        
        auto it = upper_bound(a.begin(), a.end(), b[j]);
        
        int count = distance(a.begin(), it);
        cout << count << " ";
    }
 
    return 0;
}