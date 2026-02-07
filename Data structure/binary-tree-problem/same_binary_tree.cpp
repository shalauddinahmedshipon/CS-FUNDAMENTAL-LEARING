
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;

        if(p!=NULL&&q!=NULL){
         if(p->val!=q->val) return false;
        }
        if(p==NULL&&q!=NULL||p!=NULL&&q==NULL) return false;
        
        if(p!=NULL) q1.push(p);
        if(q!=NULL) q2.push(q);
        bool isSame=true;
        

        while(!q1.empty()){
           TreeNode* p1 = q1.front();
           TreeNode* p2 = q2.front();
           q1.pop();
           q2.pop();

           if(p1->val!=p2->val){
            isSame=false;
            break;
           }
           if((p1->left&&!p2->left)||(!p1->left&&p2->left)){
            isSame=false;
            break;  
           }
           if((p1->right&&!p2->right)||(!p1->right&&p2->right)){
            isSame=false;
            break;  
           }

           if(p1->left) q1.push(p1->left); 
           if(p1->right) q1.push(p1->right); 

           if(p2->left) q2.push(p2->left); 
           if(p2->right) q2.push(p2->right); 
        }


        return isSame;

    }
};