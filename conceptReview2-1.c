#include<stdio.h>

int main(void)
{
    int count=0;
    float num = 0, sum = 0, avg = 0;
    
    printf("Enter score : ");
    scanf("%f",&num);
    
    while(num >= 0)
     {
      sum = sum + num;
      count++;
      printf("Enter score : ");
      scanf("%f",&num);
     }
     
    avg = sum / count;
    printf("\nAverage=%f",avg);
    printf("\nSum=%f",sum);
}
