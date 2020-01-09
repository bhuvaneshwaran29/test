#include <stdio.h>
int reverse() {
    int n, rev = 0, remainder;
    printf("\nEnter an integer for reverse no: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
//    return 0;
}
