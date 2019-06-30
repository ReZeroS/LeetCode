class Solution {
public:
    string countAndSay(int n) {
        string answer[30];
        answer[0] = "1";
        for(int index = 1; index < 30; ++index){
            string str = "";
            string init_str = answer[index - 1];
            int count = 0;
            char last = init_str[0];
            for(int i = 0; i < init_str.size(); ++i){
                    if(last == init_str[i]) {
                        count++;
                    } else {
                        str += count + '0';
                        str +=  last;
                        count = 1;
                        last = init_str[i];
                    }
            }
            str += count + '0';
            str += last;
            answer[index] = str;
        }
        return answer[n - 1];
    }
    
};
