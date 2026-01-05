//Program to find maximum of three numbers
#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Maximum number is: %d\n", a);
    } 
    else if (b >= a && b >= c) {
        printf("Maximum number is: %d\n", b);
    } 
    else {
        printf("Maximum number is: %d\n", c);
    }

    return 0;
}
