static const auto ______ = [](){ 
    std::ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    return nullptr; 
}();

class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int flags[256];
        //flags array: to judge whether it has appeared before and mark the postion 
        for (int i = 0; i < 256; i++)
            flags[i] = -1;
        
        int longest = 0;
        int i = 0;
        int collision = -1;
        while (s[i] != 0)
        {
            if (flags[s[i]] != -1)
                collision = (collision > flags[s[i]] ? collision : flags[s[i]]);
            flags[s[i]] = i;
            longest = (i - collision > longest ? i - collision : longest);
            i++;
        }
        
        return longest;
    }
};
