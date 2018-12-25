class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        int a[100] = {0};
        for(int i = 0; i < J.size(); ++i){
            a[J[i] -  'A'] = 1;
        }
        for(int i = 0; i < S.size(); ++i){
            if(a[S[i] - 'A']){
                count++;
            }
        }
        return count;
    }
};
