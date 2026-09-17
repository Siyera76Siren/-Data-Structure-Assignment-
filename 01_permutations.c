#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int arr[], int start, int n)
{
    int i;

    if (start == n)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
        return;
    }

    for (i = start; i < n; i++)
    {
        swap(&arr[start], &arr[i]);

        permute(arr, start + 1, n);

        swap(&arr[start], &arr[i]);
    }
}

int main()
{
    int arr[20];
    int n;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nAll permutations are:\n");

    permute(arr, 0, n);

    return 0;
}