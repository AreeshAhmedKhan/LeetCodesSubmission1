#include <stdio.h>

int main(){
	int arr[] = {2,7,11,15};
	int t, flag = 0, i, j;
	
	printf("Enter the target number: ");
	scanf("%d", &t);
	
	for(i=0; i<4; i++){
		for(j=i+1; j<4; j++){
			if(arr[i] + arr[j] == t){
				printf("[%d , %d]", i,j);
				flag = 1;
				return 0;
			}
		}
	} 
	
	if (flag == 0){
		printf("No combination could be found");
	}
}
