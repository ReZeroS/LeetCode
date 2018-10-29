/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    //  void static prints(vector<int> vec){
    //     cout << "nullptr" << vec.size();
    //     for_each(vec.begin(), vec.end(), [](auto i){
    //        cout << " " << i; 
    //     });
    //     cout << endl;
    //     return ;
    // }
    
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        
        vector<vector<int>> ans;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            
            int count = que.size();
            vector<int> vec;
            while(count--){
                TreeNode *p = que.front();
                que.pop();   
            
                if(!p){
                    vec.push_back(-1);
                    continue;
                }
                vec.push_back(p->val);
                
                que.push(p->left);
                
                que.push(p->right);
                
                
            }
            ans.push_back(vec);
        }
        
        bool flag = true;
        for_each(ans.begin(), ans.end(), [&](auto vec){
            // prints(vec);
            vector<int> reverseVec;
            reverse_copy(vec.begin(), vec.end(), reverseVec.begin());
            if(vec != reverseVec){
                flag = false;
            }
        });
        
        return flag;
    }

   
        
    
};
