static const auto _____ = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        int sLen = s.size();
        string temp;
        for(int i = 0, j = 0; i < sLen, j < sLen;  ++j){
            if(temp.find(s[j]) == string::npos){
                temp += s[j];
                len=temp.size()>len?temp.size():len;
            }
            else {
                while(s[i++] != s[j]);
                temp = s.substr(i, j - i + 1);
            }
            
        }
        
        
        return len;
    }
};
