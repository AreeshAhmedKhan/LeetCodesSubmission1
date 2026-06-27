#include <stdio.h>

int main(){
	int n,j;
	printf("How long is your array?");
	scanf("%d", &n);
	int i,num[n];
	printf("Enter values for your array:");
	for(i=0;i<n;i++){
		scanf("%d", &num[i]);
	}
	int index=0;
	for (j=0;j<n;j++){
		if(num[j]!=num[index]){
			index++;
			num[index]=num[j];
		} 
		}
		
	printf("Array after removing duplicates:");
	for (i=0;i<=index;i++){
		printf("%d", num[i]);
	}
	}
