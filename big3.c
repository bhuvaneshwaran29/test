#include <stdio.h>
int big3()
{
    double n1, n2, n3;
    printf("\nEnter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if (n1 >= n2 && n1 >= n3)
        printf("%.2lf is the largest number.", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("%.2lf is the largest number.", n2);
    else
        printf("%.2lf is the largest number.", n3);
 //   return 0;
}
