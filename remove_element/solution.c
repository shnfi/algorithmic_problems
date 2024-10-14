int removeElement(int* nums, int numsSize, int val) {
    int count, tmp;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            tmp = nums[i];
            nums[i] = nums[count];
            nums[count] = tmp;
            count++;
        }
    }

    return count;
}
