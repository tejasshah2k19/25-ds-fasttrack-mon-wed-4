#include <stdio.h>

void print()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("\nRoyal");
    }
}

int cnt = 0;

void print2()
{
    printf("\nRoyal"); // 1 2 3 4 5
    cnt++;             // 1 2 3 4 5
    if (cnt != 5)
    {
        print2();
    }
}

void printNum(int num) // 7
{
    if (num != 1)
    {
        printNum(num - 1);
    }
    printf("\n%d", num);
}

int main()
{

    printNum(7);
    return 0;
}
