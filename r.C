#include <stdio.h>

int main()
{
    int a=12, b= 18, c=9;
    int max;
    
    if(a>b)
    {
        if(a>c)
        {
            max=a;
        }
        else
        {
            max=c;
        }
    }
    else
    {
        if(b>c)
        {
            max=b;
        }
        else
        {
            max=c;
        }
    }
    printf("max no. is ::::\n",max);
}