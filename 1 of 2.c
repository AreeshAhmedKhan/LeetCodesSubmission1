#include <stdio.h>

int main() {
    int nums[] = {17 , 0 , 0 , 13 , 0 };
    int n = sizeof(nums) / sizeof(nums[0]);
    int j = 0;
	int i;  
    for (i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }
    while(j<n) {
        nums[j++]=0;
    }
    for (i=0;i<n;i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}
