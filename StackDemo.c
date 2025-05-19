#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1; // stack is empty

// push -> add -> return added item
// push -> full -> -1
int push(int num)
{
    if (top == SIZE - 1)
    {
        return -1;
    }
    else
    {
        top++;
        stack[top] = num;
        return num;
    }
}

// pop -> remove ->
//  return remove item on success
//  return -1 on empty
int pop()
{
    int num;
    if (top == -1)
    {
        // printf("\nStack Empty");
        return -1;
    }
    else
    {
        // printf("\n%d pop", stack[top]);
        num = stack[top];
        top--;
        return num;
    }
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

    int choice;
    int num;
    // any number is consider as true
    // 0 : false
    // 1 : true {any number}
    // true -> bool boolean

    while (-1)
    {
        printf("\n1 For PUSH\n2 For POP\n3 For Display\n0 For Exit");
        printf("\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Number");
            scanf("%d", &num);
            num = push(num);
            if (num == -1)
            {
                printf("\nStack OVERFLOW");
            }
            break;
        case 3 - 1:
            num = pop();
            if (num == -1)
            {
                printf("\nStack Is Empty");
            }
            else
            {
                printf(" %d removed", num);
            }
            break;
        case 3 * 1:
            display();
            break;
        case 0:
            exit(0);

        default:
            printf("\nInvalid Choice");
            break;
        } // switch
    } // while
    return 0;
}