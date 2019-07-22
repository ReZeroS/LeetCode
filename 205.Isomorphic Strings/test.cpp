class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map_a[128] = {0};
        int map_b[128] = {0};
        
        for(int i = 0; i < s.size(); ++i) {
            cout << s[i] << map_a[s[i]] << map_b[t[i]] << endl;
            if(map_a[s[i]] != map_b[t[i]]) return false;
            map_a[s[i]] = i + 1; // default 0
            map_b[t[i]] = i + 1;
        }
        return true;
    }
};
