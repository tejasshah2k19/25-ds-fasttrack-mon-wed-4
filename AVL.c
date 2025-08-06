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

int calculateBalanceFactor(struct node *root)
{
    int leftHeight = 0;
    int rightHeight = 0;

    if (root->left != NULL)
    {
        leftHeight = root->left->height;
    }
    if (root->right != NULL)
    {
        rightHeight = root->right->height;
    }

    return leftHeight - rightHeight;
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

    // cal bf
    int bf = calculateBalanceFactor(root);
    if (bf < -1)
    {
        if (root->right->data > data)
        {
            printf("\nImbalance => %d with bf = %d ==> Right Left", root->data, bf);
        }
        else
        {
            printf("\nImbalance => %d with bf = %d ==> Right Right", root->data, bf);
        }
    }
    else if (bf > 1)
    {
        if (root->left->data > data)
        {
            printf("\nImbalance => %d with bf = %d ==> Left Left", root->data, bf);
        }
        else
        {
            printf("\nImbalance => %d with bf = %d ==> Left Right", root->data, bf);
        }
    }

    // rotate

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
    // LL
    //  root = addNode(root,50);
    //  root = addNode(root,40);
    //  root = addNode(root,30);

    // RR
    //  root = addNode(root, 30);
    //  root = addNode(root, 40);
    //  root = addNode(root, 50);

    // RL
    // root = addNode(root, 30);
    // root = addNode(root, 50);
    // root = addNode(root, 40);

    // LR
    // root = addNode(root, 50);
    // root = addNode(root, 30);
    // root = addNode(root, 40);
    return 0;
}