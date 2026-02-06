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

    
int noOfLeafNodes(BinaryTreeNode<int> *root){
       int count=0;
        queue<BinaryTreeNode<int>*> q;
        if(root) q.push(root);
        while(!q.empty()){
            BinaryTreeNode<int>* p=q.front();
            q.pop();

            if(!p->left&!p->right) count++;

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }

        return count;
}