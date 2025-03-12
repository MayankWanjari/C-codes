// https://leetcode.com/problems/jump-game?envType=problem-list-v2&envId=greedy

// #include <stdio.h>

// bool canJump(int* nums, int numsSize) {
//     int longest = 0;
//     for (int i = 0; i < numsSize; i++) {
//         if (i > longest) return false;
//         longest = (longest > i + nums[i]) ? longest : (i + nums[i]);
//     }
//     return true;
// }
