class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> vec;
        backtrack(vec, "", 0, 0, n);
        return vec;
    }
    void backtrack(vector<string> &vec, string ans, int op, int cl, int max_len){
        if(ans.size() == max_len * 2) {
            vec.push_back(ans);
        }
        if(op < max_len)  backtrack(vec, ans + "(", op + 1, cl, max_len);
        if(cl < op)  backtrack(vec, ans + ")", op, cl + 1, max_len);
    }
};
