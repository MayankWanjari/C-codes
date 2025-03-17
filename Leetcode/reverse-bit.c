// https://leetcode.com/problems/reverse-bits?envType=problem-list-v2&envId=bit-manipulation
uint32_t reverseBits(uint32_t n) {
    uint32_t num=0,i=1;
    while(i<=32){
        num=(num<<1);
        num=num | (n&1);
        n=n>>1;
        i++;
    }
    return num;
}
// reverse the bit 