//Program demonstrating data type and format specifiers

#include <stdio.h>

int main() {

    int a = 10;
    float b = 3.14;
    double c = 9.87654321;
    char d = 'X';

    printf("Integer (int) a = %d\n", a);       
    printf("Float (float) b = %.2f\n", b);   
    printf("Double (double) c = %.8lf\n", c); 
    printf("Character (char) d = %c\n", d);  

    printf("\nSize of int = %lu bytes\n", sizeof(a));
    printf("Size of float = %lu bytes\n", sizeof(b));
    printf("Size of double = %lu bytes\n", sizeof(c));
    printf("Size of char = %lu byte\n", sizeof(d));

    return 0;
}
