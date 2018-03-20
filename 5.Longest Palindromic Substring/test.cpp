class Solution {
public:
    bool dp[1005][1005];
        
    string longestPalindrome(string s) {
        
        string answer;
        int len = s.size();
        int maxLen = 0;
        for(int i = 0; i < len; ++i){
            for(int j = 0; j <= i; ++j){
                if(i == j){
                    dp[j][i] = true;
                    if(maxLen < 1){
                        maxLen = 1;
                        answer = s.substr(j, 1);
                    }
                }
                else if (i - j == 1){
                    dp[j][i] = s[j] == s[i];
                    if(dp[j][i] && maxLen < i - j + 1){
                            maxLen  = i - j + 1;
                            answer = s.substr(j, maxLen);
                    }
                } else {
                    dp[j][i] = s[j] == s[i] && dp[j + 1][i - 1]; 
                    if(dp[j][i]){
                        if(maxLen < i - j + 1){
                            maxLen  = i - j + 1;
                            answer = s.substr(j, maxLen);
                        }
                        
                    }
                }
                
                
            }
        }
        return answer;
        
    }
    
    
};
