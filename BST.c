#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

int main()
{

    struct node *tmp;
    /*
             20
         10      30

    */

    root = malloc(sizeof(struct node));
    root->data = 20;
    root->left = NULL;
    root->right = NULL;

    tmp = malloc(sizeof(struct node));
    tmp->data = 10;
    tmp->left = NULL;
    tmp->right = NULL;
    root->left = tmp;

    tmp = malloc(sizeof(struct node)); 
    tmp->data = 30;
    tmp->left=NULL;
    tmp->right=NULL; 
    root->right = tmp ;

    printf("%d %d %d",root->data,root->left->data,root->right->data);


    return 0;
}