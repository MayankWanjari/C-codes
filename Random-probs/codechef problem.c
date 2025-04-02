#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k); // Read n and k

        char s[n + 1];
        scanf("%s", s); // Read the binary string

        int ones = 0;

        // Count the initial number of '1's
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ones++;
            }
        }

        // Spread the ones using K operations
        for (int i = 0; i < n - 1 && k > 0; i++) {
            if (s[i] == '0' && s[i + 1] == '1') {
                s[i] = '1';  // Change 0 to 1
                ones++;
                k--; // Reduce available operations
                i = -1; // Restart loop to ensure all are converted
            }
        }

        printf("%d\n", ones); // Output the maximum number of '1's
    }

    return 0;
}

