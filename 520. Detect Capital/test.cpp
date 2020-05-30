class Solution {
public:
    bool detectCapitalUse(string word) {
        int lowerCase = 0;
        for(int i = 0; i < word.size(); ++i) {
            if(word[i] >= 'a' && word[i] <= 'z') {
                lowerCase++;
            }
        }
        return 
            (lowerCase == word.size() 
                || (lowerCase == (word.size() - 1) && word[0] >= 'A' && word[0] <= 'Z')
            ) 
            ? true : lowerCase == 0;
    }
};
