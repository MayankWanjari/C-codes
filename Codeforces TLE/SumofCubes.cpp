// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long n;
//         cin >> n;
//         bool found = false;

//         for (long long a = 1; a * a * a <= n; a++) {
//             long long remaining = n - a * a * a;
//             if (remaining <= 0) continue;

//             long long b = round(cbrt(remaining));
//             // Check nearby values to handle floating point inaccuracies
//             for (long long delta = -2; delta <= 2; delta++) {
//                 long long current_b = b + delta;
//                 if (current_b <= 0) continue;
//                 if (current_b * current_b * current_b == remaining) {
//                     found = true;
//                     break;
//                 }
//             }
//             if (found) break;
//         }

//         cout << (found ? "YES\n" : "NO\n");
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long a=1;
        long long b=1;
        
        while(b*b*b<=x) b++;
        b--;
        
        int flag=0;
        while(a<=b){
            long long sum = pow(a, 3)+pow(b, 3);
            if(sum==x){
                flag=1;
                break;
            }
            else if(sum<x) a++;
            else b--;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 

}