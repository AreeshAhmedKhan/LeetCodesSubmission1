#include <stdio.h>
#include <string.h>

int main() {

    char s[100];
    char vow[100];
    int k = 0;   
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    int i;
    for(i = 0; i < len; i++) {
        char c = s[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            vow[k] = c;
            k++;
        }
    }
    int left = 0, right = k - 1;

    while(left < right) {
        char temp = vow[left];
        vow[left] = vow[right];
        vow[right] = temp;
        left++;
        right--;
    }
    int v = 0;

    for(i = 0; i < len; i++) {
        char c = s[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {

            s[i] = vow[v];
            v++;
        }
    }
    printf("Output: %s", s);
    return 0;
}
