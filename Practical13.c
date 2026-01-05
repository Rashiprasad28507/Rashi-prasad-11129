//Program demonstrating break and continue
#include <stdio.h>

int main() {
    int i;

    printf("Demonstration of break:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  
        }
        printf("%d ", i);
    }

    printf("\n\nDemonstration of continue:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  
        }
        printf("%d ", i);
    }

    return 0;
}
