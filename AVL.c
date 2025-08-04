#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int calculateHeight(struct node *root)
{
    int leftHeight = 0, rightHeight = 0;
    if (root == NULL)
        return 0;

    if (root->left != NULL)
    {
        leftHeight = root->left->height;
    }
    if (root->right != NULL)
    {
        rightHeight = root->right->height;
    }

    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}

struct node *addNode(struct node *root, int data)
{

    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->height = 1; // Initialize height
        return root;
    }
    else
    {
        if (root->data > data)
        {
            root->left = addNode(root->left, data);
        }
        else
        {
            root->right = addNode(root->right, data);
        }
    }

    root->height = calculateHeight(root);

    return root;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main()
{

    struct node *root = NULL;
    root = addNode(root, 50);
    printf(" %d\n", root->height); // 1
    root = addNode(root, 40);
    printf(" %d %d\n", root->height, root->left->height); // 2 1
    root = addNode(root, 30);
    printf(" %d %d\n", root->height, root->left->height); // 3 2
    
    root = addNode(root, 70);
    printf(" %d %d\n", root->height, root->left->height); // 3 2
    
    
    return 0;
}