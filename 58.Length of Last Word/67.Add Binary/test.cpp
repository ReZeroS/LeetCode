class Solution {
public:
    string addBinary(string a, string b) {
        int aIndex = a.size() - 1, bIndex = b.size() - 1;
        int last = 0, sum = 0;
        string ans = "";
        while(aIndex >= 0 || bIndex >= 0) {
            int anum = aIndex < 0 ? 0 : a[aIndex] - '0';
            int bnum = bIndex < 0 ? 0 : b[bIndex] - '0';
            sum = anum + bnum + last;
            last = 0;
            if(sum >= 2) {
                last = 1;
                sum -= 2;
            }
            ans += (sum + '0');
            aIndex -= 1;
            bIndex -= 1;
        }
        if(last == 1) ans += '1';
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};
