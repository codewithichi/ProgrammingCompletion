#include<stdio.h>
#define max 5

int main(void) {
    
    printf("Prints the value of i and j as it goes through the loop.\n");
    for (int i=0; i<max; i++)
        for (int j=0; j<max; j++) 
                printf("(%d, %d)\n",i,j);
                
}