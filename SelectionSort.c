#include <stdio.h>

void selectionSort(int a[], int size)
{
    int i, j, min, tmp;

    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = min + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        // swap min i
        if (i != min)
        {
            tmp = a[i];
            a[i] = a[min];
            a[min] = tmp;
        }
    }
}

int main()
{

    // int a[] = {34, 56, 78, 90, 2};

    int a[] = {5, 4, 3, 2, 1};

    // int a[] = {1, 2, 3, 4, 5};

    int i;

    printf("\nOriginal : ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", a[i]);
    }

    selectionSort(a, 5);

    printf("\nAfter Sorting : ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}