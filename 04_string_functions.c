#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\nLength of first string: %d\n", strlen(str1));
    printf("Length of second string: %d\n", strlen(str2));

    printf("After copying first string: ");
    strcpy(str2, str1);
    printf("%s\n", str2);

    printf("After concatenation: ");
    strcat(str1, str2);
    printf("%s\n", str1);

    printf("Comparison result: %d\n", strcmp(str1, str2));

    return 0;
}