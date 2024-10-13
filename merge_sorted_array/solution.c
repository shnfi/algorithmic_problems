void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int j = 0;
    
    for (int i = 0; i < m + n; i++)
    {
        if (nums1[i] == 0)
        {
            if (j != n)
            {
                nums1[i] = nums2[j];
                j++;
            }
        }
    }

    for (int i = 0; i < (m + n) - 1; i++)
    {
        for (int j = 0; j < (m + n) - 1; j++)
        {
            if (nums1[j] > nums1[j+1])
            {
                int tmp = nums1[j];
                nums1[j] = nums1[j+1];
                nums1[j+1] = tmp;
            }
        }
	}
}
