#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    
    int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
    int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};
 
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        int count = 0;
 
        for (int i = 0; i < 8; i++) {
            
            int x = a - dx[i];
            int y = b - dy[i];
 
            for (int j = 0; j < 8; j++) {
                int nx = x + dx[j];
                int ny = y + dy[j];
                if (nx == c && ny == d) {
                    count++;
                    break; 
                }
            }
        }
        cout << count << endl;
    }
 
    return 0;
}
// update the code to use the new C++ standard