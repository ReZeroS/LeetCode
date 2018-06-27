class Solution {
public:
    int scoreOfParentheses(string S) {        
        if(S.size() == 2)
            return 1;
        int num = 0;
        vector<int> index;
        for(int i = 0; i < S.size(); ++i){
            if(S[i] == '('){
                num++;
            }else{
                num--;
            }
            if(num == 0){
                index.push_back(i);
            }
        }
        num = 0;
        if(index.size() == 1 && S.size() > 2){
            return 2*(scoreOfParentheses(S.substr(1, S.size() - 2)));
        }else{
            int a = 0;
            for(auto i : index){
                num += scoreOfParentheses(S.substr(a, i+1-a));
                a = i + 1;
            }
        }

        return num;}
};
