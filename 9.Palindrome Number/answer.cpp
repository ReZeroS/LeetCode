static int x=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isPalindrome(int x) 
    {
        long tmp = abs(x);
        long reverse = 0;
        
        while (tmp)
        {
            reverse = reverse * 10 + (tmp % 10);
            tmp /= 10;
        }
        return reverse == x;
    }
};
