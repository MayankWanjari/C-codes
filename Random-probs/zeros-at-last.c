// https://leetcode.com/problems/move-zeroes?envType=problem-list-v2&envId=array

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

void moveZeroes(int* nums, int numsSize) {
    int nonzero=0;
    for (int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            int temp=nums[i];
            nums[i]=nums[nonzero];
            nums[nonzero]=temp;
            nonzero++;
        }
    }
}