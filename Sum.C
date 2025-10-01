#include <stdio.h>

int main() {
int num, r1, sum;

num = 73285;
sum = 0;

r1 = num % 10;
sum = sum + r1;
num = num / 10;

r1 = num % 10;
sum = sum + r1;
num = num / 10;

r1 = num % 10;
sum = sum + r1;
num = num / 10;

r1 = num % 10;
sum = sum + r1;
num = num / 10;

r1 = num % 10;
sum = sum + r1;

printf("Sum of digits is %d", sum);
}
