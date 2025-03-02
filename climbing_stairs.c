// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps

/*
int climbStairs(int n) {
    int frst = 0, next = 1;
    for (int i = 0; i < n; i++) {
        int temp = frst;
        frst = next;
        next = frst + temp;
    }
    return next;
}
    */
