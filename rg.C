#include <stdio.h>
int main() {
int no = 73285, r1, sum = 0, num = 73285;

while (no > 0) {
    r1 = no % 10;
    sum = sum + r1;
    no = no / 10;
}
printf("Sum of digits of %d is %d", num, sum);
}
