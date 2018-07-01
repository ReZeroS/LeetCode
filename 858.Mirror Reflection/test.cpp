class Solution {
public:
    int mirrorReflection(int p, int q) {
        bool east = true;
        bool up = true;
        int remain = p;
        while(1){
            remain -= q;
            if(remain == 0){
                if(up){
                    if(east){
                        return 1;
                    }
                    else {
                        return 2;
                    }
                }
                return 0;
            }
            if(remain < 0){
                remain += p;
                up = !up;
            }
            east = !east;
            
        }
        
        
    }
};
