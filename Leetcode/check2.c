#include <stdio.h>

long long calculate_min(long long x, long long n, long long m) {
    
    while (m > 0 && x > 0) {
        x = (x + 1) / 2;
        m--;
    }
    
    while (n > 0 && x > 0) {
        x = x / 2;
        n--;
    }
    return x;
}

long long calculate_max(long long x, long long n, long long m) {
    
    while (n > 0 && x > 0) {
        x = x / 2;
        n--;
    }
    
    while (m > 0 && x > 0) {
        x = (x + 1) / 2;
        m--;
    }
    return x;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long x, n, m;
        scanf("%lld %lld %lld", &x, &n, &m);
        
        long long min_x = calculate_min(x, n, m);
        long long max_x = calculate_max(x, n, m);
        printf("%lld %lld\n", min_x, max_x);
    }
    return 0;
}