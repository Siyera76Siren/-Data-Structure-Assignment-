#include <stdio.h>

int main()
{
    int n;
    int i, j;
    int prime[100];

    printf("Enter the limit: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        prime[i] = 1;
    }

    prime[0] = 0;
    prime[1] = 0;

    for (i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (j = i * i; j <= n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }

    printf("Prime numbers are:\n");

    for (i = 2; i <= n; i++)
    {
        if (prime[i] == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}