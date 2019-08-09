class Solution {
public:
    void moveZeroes(vector<int>& arrays) {
        int len = arrays.size();
        if(len == 1) return ;
        for(int i = 0, j = 0; i < len; ++i){
            if(i == j && arrays[i] && arrays[i] == arrays[j]) {
                j++;
                continue;
            }
            while(j < len && !arrays[j]) {j++;}
            if (j == len) return ;
            arrays[i] = arrays[j];
            arrays[j] = 0;
        }
    }
};
