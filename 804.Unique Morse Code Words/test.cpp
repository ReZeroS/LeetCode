class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> unique_codes;
        string morse_codes[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(auto &word : words){
            string code = "";
            for(auto &c : word) {
                code += morse_codes[c - 'a'];
            }
            unique_codes.insert(code);
        }
        return unique_codes.size();
    }
};
