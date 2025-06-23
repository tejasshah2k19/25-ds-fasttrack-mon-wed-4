#include <stdio.h>

void greet(int cnt)
{ // 5

    printf("\nWelcome");
    // condition - recursion - break
    if (cnt != 5)
    {
        greet(cnt + 1); // recursion
    }
}

void mulTable(int num, int cnt)
{
    printf("\n%d * %d = %d", num, cnt, num * cnt);

    if (cnt != 10)
    {
        cnt++;
        mulTable(num, cnt);
    }
}

void pattern(int start, int end)
{

    if (start % 2 == 0)
    {
        printf(" %d", start);
    }
    start++;
    if (start <= end)
    {
        pattern(start, end); // 31,30
    }
}

int main()
{

    // greet(1);

    // mulTable(5, 1);

    // pattern > start:10 end:30
    // even print
    pattern(10, 30);

    return 0;
}