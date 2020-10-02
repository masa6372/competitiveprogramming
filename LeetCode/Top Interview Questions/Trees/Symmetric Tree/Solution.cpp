#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isMirror(TreeNode *t1, TreeNode *t2)
{
    if (t1 == nullptr && t2 == nullptr)
    {
        return true;
    }
    else if (t1 == nullptr || t2 == nullptr)
    {
        return false;
    }
    else
    {
        return (t1 -> val == t2 -> val) && isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
    }
}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
};