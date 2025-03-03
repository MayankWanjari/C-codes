// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

int singleNumber(int* nums, int numsSize) {
    int result = nums[0];
    for (int i = 1; i < numsSize; i++)
        result ^= nums[i];
    return result;
}
// The XOR (^) operation works as follows:
// x⊕x=0 (A number XORed with itself cancels out to 0)
// x⊕0=x (A number XORed with 0 remains unchanged)
// XOR is commutative and associative, meaning the order doesn’t matter:

// a⊕b⊕c=c⊕b⊕a
// These properties make XOR useful for finding the single number
// in an array where every other number appears twice.