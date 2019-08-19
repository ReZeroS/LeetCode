class Solution {
public:
    int longestPalindrome(string s) {
        int a[26] = {0};
        int b[26] = {0};
        for(auto c : s) {
            if('A' <= c && c <= 'Z') a[c - 'A'] += 1;
            if('a' <= c && c <= 'z') b[c - 'a'] += 1;
        }
        int sum = 0;
        bool flag = false;
        for(int i = 0; i < 26; ++i){
            if(a[i] % 2 == 0) {
                sum += a[i];
            } else if (a[i] % 2 != 0) {
                sum += (a[i] - 1);
                flag = true;
            }
            if(b[i] % 2 == 0) {
                sum += b[i];
                
            } else if (b[i] % 2 != 0) {
                sum += (b[i] - 1);
                flag = true;
            }
            
        }
        if(flag) sum += 1;
        return sum;
    }
};
