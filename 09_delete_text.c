#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int position, length;
    int i;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the starting position: ");
    scanf("%d", &position);

    printf("Enter the number of characters to delete: ");
    scanf("%d", &length);

    for (i = position; str[i + length] != '\0'; i++)
    {
        str[i] = str[i + length];
    }

    str[i] = '\0';

    printf("String after deletion: %s\n", str);

    return 0;
}