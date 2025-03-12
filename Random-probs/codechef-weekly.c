#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int X, Y, K;
        scanf("%d %d %d", &X, &Y, &K); // Read X, Y, and K for each test case

        // Calculate the absolute difference between X and Y without using abs()
        int diff = (X > Y) ? (X - Y) : (Y - X);

        // If the current difference is already equal to K, no moves are needed
        if (diff == K) {
            printf("0\n");
        }
        // If the current difference is less than K, it's impossible to achieve the desired difference
        else if (diff < K) {
            printf("-1\n");
        }
        // If the difference between diff and K is odd, it's impossible to achieve the desired difference
        else if ((diff - K) % 2 != 0) {
            printf("-1\n");
        }
        // Otherwise, calculate the minimum time required
        else {
            printf("%d\n", (diff - K) / 2);
        }
    }

    return 0;
}