#include <stdio.h>

int main(){
	char s[]="This is the text that is supposed to be reversed";
	char temp; 
	int i;
	int n=sizeof(s)/sizeof(s[0]);
	for (i=0;i<(n-1)/2;i++){
		temp=s[i];
		s[i]=s[n-i-2];
		s[n-i-2]=temp;
	} 
	for (i=0;i<n;i++){
	printf("%c", s[i]);
}
}
