#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1; // stack is empty

void push(int num)
{
    top++;
    stack[top] = num;
}

void pop()
{
    printf("\n%d pop", stack[top]);
    top--;
}

void display()
{
    int i;
    printf("\nContent of the Stack\n");
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}
int main()
{

    push(10);
    push(20);
    push(30);
    pop();
    pop();
    push(40);
    push(50);
    pop();
    push(100);

    display();

    return 0;
}