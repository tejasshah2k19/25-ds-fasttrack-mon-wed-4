#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int f = -1;
int r = -1;

void enQueue(int num)
{
    r++;
    queue[r] = num;
    if (f == -1)
    {
        f = 0;
    }
}

void display(){
    int i;
    printf("\nContent in the Queue : ");
    for(i=f;i<=r;i++){
        printf(" %d",queue[i]);
    }
}

int main()
{

    enQueue(10);
    enQueue(20);
    enQueue(30);

    display();

    return 0;
}