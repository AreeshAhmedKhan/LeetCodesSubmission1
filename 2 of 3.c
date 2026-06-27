#include <stdio.h>
#include <string.h>
int main() {
    char words[10][100];  
    int n;
    printf("How many words are there?");
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);   
    }
    for(i = 0; i < n; i++) {
        char *w = words[i];
        int len = strlen(w);
        int left = 0, right = len - 1;
        int isPal = 1; 
        while(left < right) {
            if(w[left] != w[right]) {
                isPal = 0; 
                break;
            }
            left++;
            right--;
        }
        if(isPal == 1) {
            printf("First palindrome: %s", w);
            return 0;   
        }
    }
    printf("");
    return 0;
}
