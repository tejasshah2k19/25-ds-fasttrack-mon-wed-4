#include <stdio.h>
#define SIZE 5

// success -> index of a number in an array
// fail    -> -1

int linearSearch(int a[],int search)
{
 //5*4 => 20byte + 4byte + 4byte -> 28byte++ 
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (a[i] == search)
        {
            return i;//index -> current index of a number 
        }
    }
    return -1;//not found 
}
int main()
{
    //        01     0-7   0-9      0-9ABCDEF
    // number -> binary octal decimal hexadecimal
    //                          45
    //                   045
    //                                   0x45
    //           101101
    int i;
    int a[] = {23, 45, 67, 89, 90}; //230 

    printf("\n%d ", linearSearch(a,45));
    printf("\n%d ", linearSearch(a,450));

    return 0;
}