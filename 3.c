#include <stdio.h>

int main(){
	int num[5],i,temp,j;
	printf("Enter your array.");
	for (i=0;i<5;i++){
		scanf("%d", &num[i]);
	}
	
	for (i=0;i<5;i++){
		if (num[i]%2==0){
			num[i]=0;
		} else {num[i]=1;
		}
	} 
	
	for (i=0;i<5-1;i++) {
    for (j=0;j<5-i-1;j++) {
        if (num[j]>num[j+1]) {
            temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
        }
    }
}
	for (i=0;i<5;i++){
		printf("%d\t", num[i]);
	}
}
