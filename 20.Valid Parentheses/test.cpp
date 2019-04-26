class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        stack<char> stash;
        for(int i = 0; i < len; ++i){
            
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                stash.push(s[i]);
            } else {
                if(stash.empty()){
                    return false;
                }
                char top_parenthese = stash.top();
                stash.pop();
                if(!valid(top_parenthese, s[i])){
                    return false;
                }
                
            }
        }
        return stash.empty();
    }
    bool valid(char inner, char outter){
        if (inner == '(') return ')' == outter;
        if (inner == '[') return ']' == outter;
        if (inner == '{') return '}' == outter; 
        return false;
    }
    
};
