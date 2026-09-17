#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char insert[100];
    char result[300];
    int position;
    int i, j, k;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the text to insert: ");
    fgets(insert, sizeof(insert), stdin);

    str[strcspn(str, "\n")] = '\0';
    insert[strcspn(insert, "\n")] = '\0';

    printf("Enter the position: ");
    scanf("%d", &position);

    for (i = 0; i < position; i++)
    {
        result[i] = str[i];
    }

    j = 0;

    while (insert[j] != '\0')
    {
        result[i] = insert[j];
        i++;
        j++;
    }

    k = position;

    while (str[k] != '\0')
    {
        result[i] = str[k];
        i++;
        k++;
    }

    result[i] = '\0';

    printf("String after insertion: %s\n", result);

    return 0;
}