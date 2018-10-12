#include <iostream>

typedef struct node{
    int data;
    node* leftChild;
    node* rightChild;
}BTree;

//前序初始化二叉树
void InitByPreOrder(BTree* root, int arr[])
{

}
//前序递归遍历
void PreOrderTraverse(BTree* root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d", root->data);
    PreOrderTraverse(root->leftChild);
    PreOrderTraverse(root->rightChild);
}

int main()
{

}