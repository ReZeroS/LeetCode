class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        int count = 0;
        bool flag = true;
        int size = strs.size();
        if(!size){
            return answer;
        }
        while(flag){
        for(int i = 0; i < size; ++i){
            
            if(count == strs[i].size() || strs[i][count] != strs[0][count]){
                flag = false;
                break;
            }
            
        }
        if(flag){
            answer += strs[0][count];
        }
        count++;
        }
        return answer;
    }
};
