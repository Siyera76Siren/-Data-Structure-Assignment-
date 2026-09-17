#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char sub[100];
    char *position;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring: ");
    fgets(sub, sizeof(sub), stdin);

    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    position = strstr(str, sub);

    if (position != NULL)
    {
        printf("Substring found at position: %ld\n", position - str);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}