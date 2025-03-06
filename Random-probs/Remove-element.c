// rmoving element and updating the array
1. int removeElement(int* nums, int numsSize, int val) {
    int count=0;
    for (int i=0;i<numsSize;i++){
        if(nums[i]==val){
            count++; 
        }
        else nums[i-count] = nums[i];
    }
    return (numsSize - count);
}
2. //OPTIMIZED CODE
int removeElement(int* nums, int numsSize, int val) {
    int j = 0; // Pointer for placing non-val elements
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[j++] = nums[i]; // Place non-val element at index j and move j forward
        }
    }
    
    return j; // j represents the new size of the modified array
}

