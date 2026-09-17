#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i, j;
    int key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    printf("Sorted array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}