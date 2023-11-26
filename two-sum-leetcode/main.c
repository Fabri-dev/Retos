#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target,int* returnSize);
void showArray(int arr[], int size);


int main()
{
    int nums[4]={33,2,7,15};
    int*returnSize;


    returnSize= twoSum(nums,4,48,returnSize);

    showArray(returnSize,2);

    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target,int* returnSize)
{
    int a=0,b=0,j=1;
    returnSize=(int*) malloc(sizeof(int) * 2);
    for(int i=0; i < numsSize; i++)
    {
        a=nums[i];
        while(j < numsSize)
        {
            b=nums[j];
            if((a + b) == target)
            {
                returnSize[0]=i;
                returnSize[1]=j;
            }
            j++;
        }
        j=i+1;
    }
    return returnSize;
}

void showArray(int arr[], int size)
{

    for(int i=0; i < size; i++)
    {
        printf("returnSize[%i] = %i",i,arr[i]);
    }

}
