class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int numSize = digits.size();
        int last = 1;
        for(int i = numSize - 1; i >= 0; --i){
            int sum = digits[i] + last;
            digits[i] = sum % 10;
            last = sum / 10;
        }
        if(last == 1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
