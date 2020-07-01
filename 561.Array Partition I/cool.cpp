class Solution {
public:
    int arrayPairSum(vector<int> &nums) {
        int counts[20001] = {0};
        for (int num : nums) {
            counts[num + 10000]++;
        }
        int sum = 0;
        bool flag = true;
        int length = sizeof(counts) / sizeof(int);
        for (int i = 0; i < length; i++) {
            if (counts[i]) {
                while (counts[i]--) {
                    if (flag) {
                        sum += i - 10000;
                        flag = false;
                    } else {
                        flag = true;
                    }
                }
            }
        }
        return sum;
    }
};


//https://leetcode.com/problems/array-partition-i/discuss/102160/c%2B%2B-code-O(n)beats-100


