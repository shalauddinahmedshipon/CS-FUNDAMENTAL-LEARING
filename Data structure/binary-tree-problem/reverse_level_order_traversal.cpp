#include <bits/stdc++.h>

using namespace std;

   template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

vector<int> reverseLevelOrder(TreeNode<int> *root){
      vector<int> v;
        queue<TreeNode<int> *> q;
        if(root) q.push(root);
        while(!q.empty()){
           TreeNode<int>* p=q.front();
            q.pop();

            v.push_back(p->val);

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }

        reverse(v.begin(),v.end());

        return v;
}