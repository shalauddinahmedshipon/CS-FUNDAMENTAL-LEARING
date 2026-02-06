
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
    int maxDepth(TreeNode* root) {
      int maxD=0;
        queue<pair<TreeNode*,int>> q;
        if(root) q.push({root,1});
        while(!q.empty()){
            TreeNode* p=q.front().first;
            int currentLevel=q.front().second;
            q.pop();
       
            if(!p->left&&!p->right) maxD=max(maxD,currentLevel);
          
            if(p->left) q.push({p->left,currentLevel+1});
            if(p->right) q.push({p->right,currentLevel+1});
        }

        return maxD;   
    }
};