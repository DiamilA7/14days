/*
 * Note: The returned array must be malloced, assume caller calls free(). */
/*
BRUTE FORCE METHOD
Time complexity O(n^2)
Space complexity O(1)
*/




int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *indices = malloc(*returnSize*sizeof(int));
    if(indices == NULL){// in case the malloc fails we stop the program
    *returnSize = 0 ;// set to 0 to tell to the program that there are no indices to return  
    return NULL;
    }
    // Else search in the array with two 'for' loop 
    // we verify for each number in the array (with the first loop) if it has a pair by looping from i+1 to the end of the array (with the second loop)
for (int i=0; i <numsSize; i ++){
    for (int j =i+1; j < numsSize; j++){
        if (nums[i]+ nums[j] == target){
            indices[0]=i;
            indices[1]=j;
            return indices;   
        }
        
    }
}
// if no valid values were  found 
free(indices);
*returnSize = 0;
return NULL;
    
}