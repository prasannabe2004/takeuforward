#include <iostream>
#include <queue>
#include <vector>
using namespace std;
/*
Problem: Right Side View of Binary Tree
Example:
Input:
1 2 3 4 5 6 7
Output:
1 3 7
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
   public:
    vector<int> rightSideView(TreeNode* root) {
        // your code goes here
        queue<TreeNode*> q;
        vector<int> result;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode* a = q.front();
                q.pop();
                if (i == (size - 1)) result.push_back(a->data);
                if (a->left) q.push(a->left);
                if (a->right) q.push(a->right);
            }
        }
        return result;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    Solution s;
    vector<int> result = s.rightSideView(root);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}