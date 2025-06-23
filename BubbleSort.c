#include <stdio.h>

void bubbleSort(int a[], int size)
{
    int i, j, x;
    int tmp;
    int cnt = 0;
    int swap = 1;

    for (j = 0; j < size - 1 && swap == 1; j++) // 5
    {
        swap = 0;

        printf("\nPass %d Original Series:", j + 1);
        for (x = 0; x < 5; x++)
        {
            printf(" %d", a[x]);
        }
        for (i = 0; i < size - 1 - j; i++) // 4  O(n*n)
        {
            cnt++;
            if (a[i] > a[i + 1])
            {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
                swap = 1;
            }
            printf("\nSub Pass %d:", i + 1);
            for (x = 0; x < 5; x++)
            {
                printf(" %d", a[x]);
            }
        }
        // array print
        printf("\nAfter Pass %d:", j + 1);
        for (x = 0; x < 5; x++)
        {
            printf(" %d", a[x]);
        }
    } // complexity

    printf("\ncnt = %d", cnt);
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

    bubbleSort(a, 5);

    printf("\nAfter Sorting : ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}