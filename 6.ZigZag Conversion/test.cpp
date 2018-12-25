class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        string ans = "";
        string temp[numRows];
        int iter = 0;
        int index = 0;
        int direct = 1;
        while(iter < s.size()){
            if(index == 0){
                direct = 1;
            }
            else if(index == (numRows-1)) {
                direct = -1;
            }
            temp[index] +=  s[iter];
            iter++;
            index += direct;
        }
        for(int i = 0; i < numRows; ++i){
            ans += temp[i];
        }
        return ans;
    }
};
