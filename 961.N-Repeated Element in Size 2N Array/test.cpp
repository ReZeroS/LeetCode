class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int mark[10000 + 50] = {0};
        for(auto &num : A) {
            if(mark[num] == 1) return num;
            mark[num] = 1;
        }
        return 0;
    }
};
