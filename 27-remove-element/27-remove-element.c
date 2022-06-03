

int removeElement(int* nums, int numsSize, int val){
    for(int j=0;j<numsSize;j++)
        if(nums[j]==val){
            for(int i=j;i<numsSize-1;i++) nums[i]=nums[i+1];
            numsSize--;
            j--;
        }
    return numsSize;
}