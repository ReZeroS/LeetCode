
// https://leetcode.com/problems/jewels-and-stones/
static int fast_io = []() { std::ios::sync_with_stdio(false); cin.tie(nullptr); return 0; }();

class Solution {
public:
    int numJewelsInStones(string j, string s) {
        vector<int> v(256);
        for (char ch : j) v[ch] = 1;
        
        int res = 0;
        for (char ch : s) {
            if (v[ch]) ++res;
        }
        return res;
    }
};
