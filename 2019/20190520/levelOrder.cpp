//
// Created by terrellhu on 2019-05-20.
//hhh

#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

class CTreeNode{
public:
    CTreeNode(){val = 0;lNode = nullptr; rNode = nullptr}
    ~CTreeNode(){}
    void init(vector<int> vec)
    {
        for (auto iter = vec.begin(); iter != vec.end(); ++iter)
        {
            val = *iter;

        }
    }
public:
    int val;
    CTreeNode* lNode;
    CTreeNode* rNode;
};


int main(int argc, char** argv){
    // 构造二叉树
    CTreeNode root;
    root.val = 1;
    CTreeNode l1;
    l1.val = 2;
    root.lNode = &l1;
    CTreeNode r1;
    l1.val = 3;
    root.lNode = &r1;
    CTreeNode l2;
    l1.val = 4;
    root.lNode = &r1;
}
