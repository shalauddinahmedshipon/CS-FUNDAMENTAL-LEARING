#include <bits/stdc++.h> 
using namespace std;
   template <typename T>
    class BinaryTreeNode {
       public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    queue<BinaryTreeNode<int> *> q;
    if(root) q.push(root);
    bool isSpecial = true;

    while(!q.empty()){
        BinaryTreeNode<int> * p= q.front();
        q.pop();
        
      if(!((p->left&&p->right)||(!p->left&&!p->right))){
          isSpecial=false;
          break;
      }

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return isSpecial;
}