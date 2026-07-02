#include <stdio.h>

int reverse(int x){
	int maxInt = 2147483647;
	int minInt = -2147483648;
	
	int rev = 0;
	
	while( x != 0 ){
		
		int pop;
		pop = x % 10;
	
		if(rev>maxInt/10 || (rev==maxInt/10 && pop>7)){
			return 0;
		}
	
		if(rev<minInt/10 || (rev==minInt/10 && pop<-8)){
			return 0;
		}
		
		x /= 10; 
		rev = rev*10+pop;
	}
	
	return rev; 
}

int main(){
	int x;
	
	printf("Enter x: ");
	scanf("%d", &x);
	
	printf("The reversed integer is %d", reverse(x));
	
}
