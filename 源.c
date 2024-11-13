#define _CRT_SECURE_NO_WARNINGS
void swap(int* a, int* b)
{//����
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void reverse(int* nums, int start, int end)
{//��ת
    while (start < end)
    {
        swap(&nums[start], &nums[end]);
        start++;
        end--;
    }

}
void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);

}