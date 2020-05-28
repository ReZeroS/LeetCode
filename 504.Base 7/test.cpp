class Solution {
public:
    string convertToBase7(int num) {
        int tmp = num;
        num = tmp < 0 ? -num : num;
        string ans = "";
        while(num/7 != 0) {
            ans += to_string(num % 7);
            num /= 7;
        }
        ans += (num % 7 == 0) ? "": to_string(num % 7); 
        reverse(ans.begin(), ans.end());
        return tmp < 0 ? "-" + ans : ans;
    }
};
