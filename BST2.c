#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int data)
{ // NULL ,30
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {

        if (root->data < data)
        {
            root->right = addNode(root->right, data);
        }
        else
        {
            root->left = addNode(root->left, data);
        }

        return root;
    }
}
void inOrder(struct node *root) // 50
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data); // 20  30  50
        inOrder(root->right);      //
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{

    struct node *root = NULL;

    root = addNode(root, 50);
    addNode(root, 30);
    addNode(root, 70);
    addNode(root, 20);

    inOrder(root);
    // preOrder(root);
    // postOrder(root);

    searc(root,20);//1 
    searc(root, 100); //0
    return 0;
}
