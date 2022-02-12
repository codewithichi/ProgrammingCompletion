#include<stdio.h>

int main(void)
{
    for (int i = 1; i <= 1024 / 2; i++) {
        int doubled = i * 2;
        printf("%i ", doubled);
    }
}
