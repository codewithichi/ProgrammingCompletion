#include <stdio.h>

int main(void) {
    for (int x = 8; x >=1; x--) {
    	for (int y = x; y>= 1; y--) {
        	printf ("*");
            printf ("%d\n", x);
    	}
	}
}