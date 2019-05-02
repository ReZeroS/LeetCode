class Solution {
public:
    string removeOuterParentheses(string S) {
        int num = 0;
        bool first_left = false;
        int len = S.size();
        string answer = "";
        for(int i = 0; i < len; ++i){
            if(S[i] == '(') {
                num++;
                if(!first_left) {
                    first_left = true; 
                    continue;
                }
            }
            if(S[i] == ')') {
                num--;
                if(num == 0) {
                    first_left = false;
                    continue;
                }
            }
            answer += S[i];
        }
        return answer;
        
    }
};
