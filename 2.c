#include <stdio.h>

int main(){
        int n;
        printf("Enter n:");
        scanf("%d", &n);
        int arr1[2*n],arr2[2*n],i,j=0;
        printf("Enter your array");
        for (i=0;i<2*n;i++){
         scanf("%d", &arr1[i]);
                
        }
        for (i=0;i<n;i++){
         arr2[j++]=arr1[i];
         arr2[j++]=arr1[i+n];
        }
        printf("Shuffled array:");
        for (i=0;i<2*n;i++){
        printf("%d", arr2[i]);}

}
