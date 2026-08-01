class Solution {
public:
    vector<string> ans;
    void f(TreeNode* root,string &str){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            str += to_string(root->val);
            ans.push_back(str);
            str.pop_back();
            return;
        }
        string i = str;
        str += to_string(root->val);
        str += "->";
        string j = str;
        f(root->left,str);
        str = j;
        f(root->right,str);
        str =  i;    
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string str = "";
        f(root,str);
        return ans;
    }
};

/* class Solution {
public:
    vector<string> ans;
    void f(TreeNode* root,string str){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            str += to_string(root->val);
            ans.push_back(str);
            return;
        }
        string s = to_string(root->val);
        f(root->left,str + s + "->");
        f(root->right,str + s + "->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        f(root,"");
        return ans;
    }
}; */