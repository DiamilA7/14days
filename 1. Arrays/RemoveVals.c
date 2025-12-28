// Time complexity O (n)
//Space Complexity O(1)
int removeElement(int* nums, int numsSize, int val){
    int i = 0; // index for next valid element

    for(int j = 0; j < numsSize; j++){
        if(nums[j] != val){
            nums[i] = nums[j]; // write valid element
            i++;               // move index forward
        }
        // else: nums[j] == val → skip
    }

    return i; // new length
}
