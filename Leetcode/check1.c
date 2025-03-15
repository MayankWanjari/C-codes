// https://leetcode.com/problems/house-robber-iv?envType=daily-question&envId=2025-03-15

int minCapability(int *nums, int numsSize, int k) {
    int l = INT_MAX, r = 1, m;
    for (int i = 0; i < numsSize; i++) {
      if (nums[i] > r)
        r = nums[i];
      if (nums[i] < l)
        l = nums[i];
    }
    while (l < r) {
      m = (l + r) / 2;
      int cnt = 0;
      for (int i = 0; i < numsSize;) {
        if (nums[i] <= m) {
          cnt++;
          i += 2;
        } else {
          i++;
        }
      }
      if (cnt >= k)
        r = m;
      else
        l = m + 1;
    }
    return l;
  }