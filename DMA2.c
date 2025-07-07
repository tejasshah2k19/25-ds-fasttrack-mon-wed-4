#include <stdio.h>
#include <stdlib.h>

int main()
{


    int *x; 
    x = malloc(sizeof(int));//4 -> int 


    int *a; // a[10]
    printf("\n%d",sizeof(a));

    a = calloc(5, sizeof(int));//4->5 block array 
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter value");
        scanf("%d", &a[i]);
    }

    printf("\nElements in the array => ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", a[i]);
    }

    free(a);

    return 0;
}
//5 array scan print -> sum 