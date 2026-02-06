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

int mx; 
int diameter(TreeNode* root){
    if(root==NULL) return 0;
    if(root->left==NULL&& root->right==NULL) return 1;
    int l=diameter(root->left);
    int r=diameter(root->right);
    int d=l+r;
    mx=max(d,mx);
    return max(l,r)+1;

}
   
class Solution {
public:

  
    int diameterOfBinaryTree(TreeNode* root) {
      mx=0;
      int mxH=diameter(root);
      return mx;  
    }
};