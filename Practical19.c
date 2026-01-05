//Program using string functions (strlen, strcpy, strcat, strcmp)
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("\nLength of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    strcpy(str3, str1);
    printf("\nString after copying str1 to str3: %s\n", str3);

    strcat(str1, str2);
    printf("After concatenation of str1 and str2: %s\n", str1);

    int cmp = strcmp(str2, str3);
    if (cmp == 0) {
        printf("str2 and str3 are equal\n");
    } else if (cmp > 0) {
        printf("str2 is greater than str3\n");
    } else {
        printf("str2 is smaller than str3\n");
    }

    return 0;
}
