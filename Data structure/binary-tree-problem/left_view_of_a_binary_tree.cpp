#include <bits/stdc++.h> 


using namespace std;
   template <typename T>
    class TreeNode {
       public:
        T data;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };


vector<int> getLeftView(TreeNode<int> *root)
{
         int frq[3000]={false};
         vector<int> v;

        queue<pair<TreeNode<int>*,int>> q;
        if(root) q.push({root,1});
        
        while(!q.empty()){
            TreeNode<int>* p=q.front().first;
            int currentLevel=q.front().second;
            q.pop();
       
            if(frq[currentLevel]==false){
               frq[currentLevel]=true;
               v.push_back(p->data);
            }
          
            if(p->left) q.push({p->left,currentLevel+1});
            if(p->right) q.push({p->right,currentLevel+1});
        }

        return v;   
}