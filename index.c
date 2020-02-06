#include<stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	for(int i=0; i<numsSize-1; i++) {
		for(int j=i+1; j<numsSize; j++) {
			if(nums[i] + nums[j] == target) {
				returnSize[0] = i;
				returnSize[1] = j;
				return returnSize;
			}
		}
	}
	return returnSize;
}

int main(int argc, char *argv[]) {
	int arr[] = {2,7,11,15};
	int brr[2];
	twoSum(arr, 4, 9, brr);
	for(int i=0; i<sizeof(brr)/sizeof(int); i++) {
		printf("%d ",brr[i]);
	}
	printf("\n");
}