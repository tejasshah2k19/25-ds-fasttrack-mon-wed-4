#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

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
    char str[50];
    int i;
    char x;
    int flag = 1;
    printf("\nEnter String");
    scanf("%s", &str); // ()()()

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            push(str[i]);
        }
        else
        {
            // closing
            x = pop();
            if (str[i] == ']' && x == '[')
            {
                continue;
            }
            else if (str[i] == '}' && x == '{')
            {
                continue;
            }
            else if (str[i] == ')' && x == '(')
            {
                continue;
            }
            else
            {
                flag = -1;
                break;
            }
        }
    }
    if (flag == -1  || top != -1)
    {
        printf("\n Invalid Expression ");
    }
    else
    {
        printf("\n Valid Expression");
    }

    return 0;
}