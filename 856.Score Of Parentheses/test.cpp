class Solution {
public:
    
    int getScore(int start, int stop, const string& s)
    {
        vector<int> starts;
        vector<int> stops;

        for(int i = start; i <= stop;)
        {
            starts.push_back(i);
            int temp = 1;
            i++;
            while(1)
            {
                if(s[i] == '(')
                {
                    ++i;
                    temp++;
                }
                else   // s[i] == ')'
                {
                    temp--;
                    if(!temp)
                    {
                        stops.push_back(i);
                        i++;
                        break;
                    }
                    i++;
                }
            }
        }
        int sum = 0;
        int len = starts.size();
        for(int i = 0; i < len; ++i)
        {
            if(stops[i] - starts[i] > 1)
            {
                sum += 2 * getScore(starts[i] + 1, stops[i] - 1, s);
            }
            else
            {
                sum += 1;
            }

        }

        return sum;
    }
    
    int scoreOfParentheses(string S)
    {
        return getScore(0, S.size() - 1, S);
    }
  
};
