

// O(n) We traverse the array once
//O(1)The modification is done in-place.
int removeDuplicates(int* nums, int numsSize) {
    // If the array is empty, there are no elements to process
    if (numsSize == 0) return 0;

    // k is the index where the next unique element will be written
    // It also represents the number of unique elements found so far
    int k = 1;

    // Start from the second element since the first one is always unique
    for (int i = 1; i < numsSize; i++) {

        // If the current element is different from the last unique element
        if (nums[i] != nums[k - 1]) {

            // Write the new unique element at index k
            nums[k] = nums[i];

            // Move the write index forward
            k++;
        }
    }

    // k is the number of unique elements
    return k;