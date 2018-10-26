#include <iostream>
#include <math.h>

#define NULL_NODE 0xFFFFFFFFL

typedef struct node{
    int data;
    node* leftChild;
    node* rightChild;
}BTree;

//按层次初始化二叉树
//用一个数组初始化二叉树，如果子节点为空，只置为0xFFFFFFFF
void InitByLtOrder(BTree* root, int arr[]， int length)
{
    root.data=arr[0];
    BTree* cur = root;
    BTree* child = root->leftChild;
    int iCurLevel = 1;
    if (NULL == arr || 0 == length)
    {
        return;
    }
    //按层初始化
    int iNodeNum = 0;
    for (int i = 0; iNodeNum < length; ++iCurLevel)
    {
        for(int i = 1; i < (1<<i); ++i)
        if (NULL_NODE != arr[i]){
            cur->leftChild = new BTree;
            cur->leftChild->data = arr[i];
        }
        else{
            cur->leftChild = NULL;
        }
        if (NULL_NODE != arr[i+1]){
            cur->rightChild = new BTree;
            cur->rightChild->data = arr[i+1];
        }
        else{
            cur->rightChild = NULL;
        }
        cur = 
    }
}
//前序递归遍历
void PreOrderTraverse(BTree* root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        PreOrderTraverse(root->leftChild);
        PreOrderTraverse(root->rightChild);
    }
}

//中序递归遍历
void InOrderTraverse(BTree* root)
{
    if (root != NULL)
    {
        PreOrderTraverse(root->leftChild);
        printf("%d", root->data);
        PreOrderTraverse(root->rightChild);
    }
}

//后序递归遍历
void InOrderTraverse(BTree* root)
{
    if (root != NULL)
    {
        PreOrderTraverse(root->leftChild);
        PreOrderTraverse(root->rightChild);
        printf("%d", root->data);
    }
}

int main()
{

}