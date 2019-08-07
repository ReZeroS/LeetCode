class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26] = {0};
        int b[26] = {0};
        for(auto c : s){
            a[c - 'a'] += 1;
        }
        for(auto c : t){
            b[c - 'a'] += 1;
        }
        for(int i = 0; i < 26; ++i) {
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
};
