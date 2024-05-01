#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool 
isSameTree(TreeNode* p, TreeNode* q) 
{
    if(p->val!=q->val)
    {
        return false;
    }
    if(p->left && q->left)
    {
        isSameTree(p->left, q->left);
    }
    if(p->right && q-> right)
    {
        isSameTree(p->right, q->right);
    }
}


int
main()
{
    return 0;
}