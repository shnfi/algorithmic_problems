void rotate(int* nums, int numsSize, int k) {
    int tmp1, tmp2;

    for (int i = 0; i < k; i++)
    {
        for (int j = numsSize - 1; j > 0; j--)
        {
            tmp1 = nums[j];
            tmp2 = nums[j - 1];
            nums[j] = tmp2;
            nums[j - 1] = tmp1;
        }
    }
}
