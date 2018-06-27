class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size() != B.size() || A.size() < 2){
            return false;
        }
        int len = A.size();
        int count = 0;
        int temp[4];
        for(int i = 0; i < len; ++i){
            if(A[i] != B[i]){
                temp[count++] = i; 
                if(count > 2){
                    break;
                }
            }
        }
        if(count == 2){
            swap(B[temp[0]], B[temp[1]]);
        }
        if(count == 0){
            int charCount[26] = {0};
            for(int i = 0; i < len; ++i){
                charCount[A[i] - 'a']++;
                if(charCount[A[i] - 'a'] == 2){
                    return true;
                }
            }
            return false;
            
        }
        if(count != 2){
            return false;
        }
        
        return A == B;
    }
};
