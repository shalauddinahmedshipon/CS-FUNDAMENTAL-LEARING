
#include<bits/stdc++.h>;
using namespace std;


 struct TreeNode {
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode() : val(0), left(nullptr), right(nullptr) {}
 TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 }; 

class Solution {
public:

    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty()){
            TreeNode* p=q.front();
            q.pop();

            if(p->left&&p->left->left==NULL&p->left->right==NULL) sum+=p->left->val;

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }

        return sum;
        
    }
};