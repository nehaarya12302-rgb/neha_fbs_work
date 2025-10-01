#include <stdio.h>
int main(){
	int num = 73285;
	int sum;
	
	sum = (num % 10) + (num / 10 % 10) + (num / 100 % 10) + (num / 1000 % 10) + (num / 10000);
	
	printf("Sum of digits of %d is %d",num, sum);
}
