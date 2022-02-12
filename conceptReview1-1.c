#include <stdio.h>

int main(void) {
    for (int k = 1; k < 16; k += 2)
    {
        if (k % 3 ==0) { continue; }
        else { printf ("%d\n", k); }
    }
}