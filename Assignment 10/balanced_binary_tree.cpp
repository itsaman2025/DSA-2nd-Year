 
class Solution {
public:
int getHeight(TreeNode* root){
    if(!root){
        return 0;
     }
    int leftHeight=getHeight(root->left);
    int rightHeight=getHeight(root->right);
    return max(leftHeight,rightHeight)+1;
    }
  bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
          }
            if(isBalanced(root->left)==false){
             return false;
        }
            if(isBalanced(root->right)==false){
              return false;
      }
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root ->right);
            if (abs(leftHeight-rightHeight)<2){
            return true;
        }
            else 
            return false;
}
};
