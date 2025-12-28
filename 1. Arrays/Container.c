// Time complexity = O(n)
//Space complexity = O(1)

int maxArea(int* height, int size) {  
    
    int left = 0;              // Index starting from the left end of the array
    int right = size - 1;        // Index starting from theright end of the array
    int maxArea = 0;

    //We loop  while the two indices do not cross:  The height of the container is limited by the shorter line
    while (left < right) {

        int currentHeight = height[left] < height[right]
                            ? height[left]
                            : height[right];

        // The width of the container is the distance between the two indices
        int width = right - left;
        int area = currentHeight * width;       // Calculate the current area

        // Update the maximum area if the current one is larger
        if (area > maxArea)
            maxArea = area;

        // Move the index that has the smaller height
        // Moving the taller one cannot increase the area
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    return maxArea;   
    // Return the maximum water that can be contained
}
