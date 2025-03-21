// https://leetcode.com/problems/majority-element?envType=study-plan-v2&envId=top-interview-150


int majorityElement(int* nums, int numsSize) {
    int majEle=nums[0];
    int count=1;
    for( int i=1; i<numsSize;i++){
        if(count==0){
            majEle=nums[i];
            count++;
        }
        else if(majEle==nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return majEle;
}