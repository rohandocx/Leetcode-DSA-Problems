class Solution {
public:
     void preorderhelp(TreeNode* root, vector<int>&x){
        if(root == NULL){
          return;
        }
        
        x.push_back(root->val);
        preorderhelp(root->left,x);
        preorderhelp(root->right,x);
       
     }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> x;
        preorderhelp(root, x);
        return x;
    }
};
