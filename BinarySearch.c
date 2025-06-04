#include <stdio.h>

int binarySearch(int a[], int n, int search)
{

    int min = 0, max = n - 1, mid;

    while (min <= max)
    {
        mid = (min + max) / 2;

        if (a[mid] == search)
        {
            return mid; // found
        }
        else if (search > a[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int index = binarySearch(a, 10, 100); //-1 not found
    printf(" %d", index);

    index = binarySearch(a, 10, 30); //-1 not found
    printf(" %d", index);

    index = binarySearch(a, 10, 40); //-1 not found
    printf(" %d", index);

    index = binarySearch(a, 10, 50); //-1 not found
    printf(" %d", index);

    index = binarySearch(a, 10, 1000); //-1 not found
    printf(" %d", index);

    index = binarySearch(a, 10, 5); //-1 not found
    printf(" %d", index);

    index = binarySearch(a, 10, 55); //-1 not found
    printf(" %d", index);



    return 0;
}