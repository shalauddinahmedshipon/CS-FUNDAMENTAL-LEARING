
#include <bits/stdc++.h> 
using namespace std;
   template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };


int nodeLevel(TreeNode<int>* root, int searchedValue)
{
        int level=0;
        queue<pair<TreeNode<int>*,int>> q;
        if(root) q.push({root,1});
        while(!q.empty()){
            TreeNode<int>* p=q.front().first;
            int currentLevel=q.front().second;
            q.pop();
       
            if(p->val==searchedValue){
                level=currentLevel ;
                break;
            }
          
            if(p->left) q.push({p->left,currentLevel+1});
            if(p->right) q.push({p->right,currentLevel+1});
        }

        return level;   
    
}



