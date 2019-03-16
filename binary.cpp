#include <iostream>

using namespace std;

typedef struct node *nodeptr;
typedef struct node
{
    int value;
    nodeptr left;
    nodeptr right;
} node;

int preorder(nodeptr ptr)
{
    if(ptr)
    {
        cout << ptr->value << ' ';
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

int inorder(nodeptr ptr)
{
    if(ptr)
    {
        inorder(ptr->left);
        cout << ptr->value << ' ';
        inorder(ptr->right);
    }
}

int postorder(nodeptr ptr)
{
    if(ptr)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout << ptr->value << ' ';
    }
}

int main()
{
    node node[16];
    int n;

    for(int i = 1; i <= 15; i++)
    {
        node[i].value = i;
        node[i].left = NULL;
        node[i].right = NULL;
    }

    for(int i = 1; i <= 15; i++)
    {
        if(i % 2 == 0)
        {
            node[i / 2].left = &node[i];
        }
        else
        {
            node[i / 2].right = &node[i];
        }
    }

    preorder(&node[1]);
}