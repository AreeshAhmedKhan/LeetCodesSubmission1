#include <stdio.h>

int main(){
	int n,arr1[n/2],arr2[n/2],i,arr3[n],j;
	printf("How many values are in your array");
	scanf("%d", &n);
	printf("Enter your array");
	for (i=0;i<n/2;i++){
		scanf("%d", &arr1[i]);
	}
	for (i=0;i<n/2;i++){
		scanf("%d", &arr2[i]);
	}
	for (i=0,j=1;i<n,j<n;i+2,j+2){
		arr3[i]=arr1[i];
	    arr3[j]=arr2[i];	 	
    }
	
}
