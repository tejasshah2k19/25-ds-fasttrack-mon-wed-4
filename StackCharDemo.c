#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

char stack[SIZE];
int top = -1; // stack is empty

// push -> add -> return added item
// push -> full -> -1
int push(char data)
{
    if (top == SIZE - 1)
    {
        return -1;
    }
    else
    {
        top++;
        stack[top] = data;
        return data;
    }
}

// pop -> remove ->
//  return remove item on success
//  return -1 on empty
char pop()
{
    char num;
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
        printf("%c", stack[i]);
    }
}
int main()
{

    int choice;
    char num;
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
            // fflush(stdin);
            scanf(" %c", &num);
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
                printf(" %c removed", num);
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