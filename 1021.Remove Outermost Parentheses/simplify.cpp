class Solution {
public:
    string removeOuterParentheses(string S) {
        int s = 0;
        string T = "";
        for (const auto& c: S) {
            if (s >= 1 and not (s == 1 and c == ')'))
                T += c;
            c == '(' ? s += 1 : s -= 1;
        }
        return T;
    }
};
