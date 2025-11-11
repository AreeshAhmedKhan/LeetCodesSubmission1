#include <stdio.h>
int main(){
    int num[5],runningSum[5],i,sum=0;
    printf("Enter your numbers to find running sum of.\n");
    for (i=0;i<5;i++){
    scanf("%d", &num[i]);
    }
    runningSum[0]=num[0];
	for(i=1;i<=5;i++){
    runningSum[i]=runningSum[i-1]+num[i];
    }
    for(i=0;i<5;i++){
        printf("%d\t",runningSum[i]);
    }
}
