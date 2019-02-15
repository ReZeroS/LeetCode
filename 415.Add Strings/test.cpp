class Solution {
public:
    string addStrings(string a, string b) {
            string c = "";
            int a_pos = a.size() - 1;
            int b_pos = b.size() - 1;
            int last = 0;
            while( (a_pos >= 0) || (b_pos >= 0) ){
                int temp = 0;
                if(a_pos >= 0){
                    temp += a[a_pos--] - '0';
                }
                if(b_pos >= 0){
                    temp += b[b_pos--] - '0';
                }
                temp += last;
                c += to_string(temp % 10);
                if((temp/10) > 0){
                    last = 1;
                } else {
                    last = 0;
                }
            }
            if(last == 1){
                c += "1";
            }
            reverse(c.begin(), c.end());
            return c;
    }
};
