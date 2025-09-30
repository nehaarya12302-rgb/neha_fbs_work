#include <stdio.h>
int main() {
    char ch='#';
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
        printf("Alphabet");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Symbol");
}
