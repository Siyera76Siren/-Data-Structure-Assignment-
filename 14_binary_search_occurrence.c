#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int search;
    int low, high, mid;
    int first = -1;
    int last = -1;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (first == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("First occurrence: %d\n", first);
        printf("Last occurrence: %d\n", last);
        printf("Total occurrences: %d\n", last - first + 1);
    }

    return 0;
}