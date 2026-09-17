#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char pattern[100];
    int i, j;
    int found = 0;

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the pattern: ");
    fgets(pattern, sizeof(pattern), stdin);

    text[strcspn(text, "\n")] = '\0';
    pattern[strcspn(pattern, "\n")] = '\0';

    for (i = 0; text[i] != '\0'; i++)
    {
        for (j = 0; pattern[j] != '\0'; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }

        if (pattern[j] == '\0')
        {
            printf("Pattern found at index: %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Pattern not found.\n");
    }

    return 0;
}