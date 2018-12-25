class Solution {
public:
    int myAtoi(string str) {
        long ans = 0;
        int first = 0;
        int negtive = 1;
        for(int i = 0; i < str.size(); ++i){
            if(str[i] != ' ' ){
                first = i;
                break;
            }
        }
        if(!(str[first] == '+' || str[first] == '-' || (str[first] <= '9' && str[first] >= '0'))){
            return 0;
        }
        if(str[first] == '+' || str[first] == '-'){
            if(str[first] == '-'){
                negtive = -1;
            }
            first++;
        }
        for(int i = first; i < str.size(); ++i){
            if(str[i] <= '9' && str[i] >= '0'){
                ans = ans*10 + (str[i] - '0') * negtive;
                if(ans >=INT_MAX){
                    return INT_MAX;
                }
                if(ans <= INT_MIN){
                    return INT_MIN;
                }
            }
            else break;
        }
        
        return (int)ans;
    }
};
