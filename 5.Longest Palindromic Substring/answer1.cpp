static const auto _____ = []()
{
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        return nullptr;
 }();

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size(), len = 0, start = 0;
        for(int i = 0; i < n; i++){
            int left = i, right = i;
            while(right < n && s[right+1] == s[right]) right++;
            i = right;
            while(left > 0 && right < n-1 && s[left-1] == s[right+1]){
                left--;
                right++;
            }
            
            if(len < right-left+1){
                len = right - left + 1;
                start = left;
            }
        }
        return s.substr(start, len);
    }
};
