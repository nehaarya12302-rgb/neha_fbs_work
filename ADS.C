#include <stdio.h>  
int main() {  
    char ch = '9';  

    if (ch >= '0' && ch <= '9') {  
        printf("Digit");  
    } else {  
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')  
            printf("Alphabet");  
        else  
            printf("Symbol");  
    }  
}  