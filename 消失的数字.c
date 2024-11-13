#define _CRT_SECURE_NO_WARNINGS
int missingNumber(int* nums, int numsSize) {
    int sum = (numsSize * (numsSize + 1)) / 2;
    int i;
    for (i = 0; i < numsSize; i++)
    {
        sum = sum - nums[i];
    }
    return sum;
}
