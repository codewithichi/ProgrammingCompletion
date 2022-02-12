#include<stdio.h>

int main(void)
{
    int x = 1;
    while (x <= 15)
    {
        printf ("%d", x);
        if (x % 5 ==0)
        printf ("\n");
        else
        printf ("\t");
        x++;
    }
}
