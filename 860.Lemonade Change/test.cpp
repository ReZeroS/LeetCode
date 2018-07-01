class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int rest5 = 0;
        int rest10 = 0;
        for(auto bill: bills){
            if(bill == 5)
            {
                rest5 += 1;
            } 
            else if (bill == 10) 
            {
                rest5 -= 1;
                rest10 += 1;
                if(rest5 < 0){
                    return false;
                }
            }
            else if (bill == 20)
            {
                bool flag = false;
                if(rest10 >= 1 && rest5 >= 1)
                {
                    rest5 -= 1;
                    rest10 -= 1;
                    flag = true;
                    continue;
                }
                else if(rest5 >= 3)
                {
                    rest5 -= 3;
                    flag = true;
                    continue;
                }
                
                if(!flag){
                    return false;
                }
                
            }
        }
        return true;
    }
};
