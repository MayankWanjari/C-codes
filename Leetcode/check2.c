// Ecrade has an integer x
// . There are two kinds of operations.

// Replace x
//  with ⌊x2⌋
// , where ⌊x2⌋
//  is the greatest integer ≤x2
// .
// Replace x
//  with ⌈x2⌉
// , where ⌈x2⌉
//  is the smallest integer ≥x2
// .
// Ecrade will perform exactly n
//  first operations and m
//  second operations in any order. He wants to know the minimum and the maximum possible value of x
//  after n+m
//  operations. However, it seems a little difficult, so please help him!

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤104
// ). The description of the test cases follows.

// The only line of each test case contains three integers x
// , n
// , and m
//  (0≤x,n,m≤109
// ).

// Output
// For each test case, print two integers in one line, representing the minimum and the maximum possible value of x
//  after n+m
//  operations.

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