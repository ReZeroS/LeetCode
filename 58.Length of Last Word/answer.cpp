class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int ssize  = s.size();
        int j = ssize - 1;
        while(s[j--] == ' ');
        for( int i = j+1; i >= 0; i-- ){
            if(s[i] == ' ')
                return j+1 - i;
            
        }
        return j+2;
    }
};
