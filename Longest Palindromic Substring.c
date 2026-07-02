#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int isPalindrome(char str[], int start, int end){
	
	int i;
	
	while ( start < end ){
		if (str[start] != str[end]){
			return 0;
		} else {
			start++;
			end--;
		}
	}
	
	return 1;

}

int longestPal(char str[]){
	int n = strlen(str);
	int maxlength = 1;
	int startIndex = 0;
	int i,j;
	
	for(i=0 ; i<n ; i++){
		for(j=i ; j<n ; j++){
			if(isPalindrome(str,i,j)){
				if((j-i+1)>maxlength){
					maxlength = (j-i+1);
					startIndex = i;
				}
			}
		}
	}
	
	printf("Longest Palindromic Substring: \n");
	
	for(i=startIndex;i<startIndex+maxlength;i++){
		printf("%c", str[i]);
	}
	printf("\nLength of string: %d\n", maxlength);
	
	
}


int main(){
	char str[100];
	printf("Enter your string: ");
	scanf("%[^\n]", str);
	
	longestPal(str);
	
}

