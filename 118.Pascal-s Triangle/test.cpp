class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        if(numRows == 0){
            return answer;
        }
        vector<int> elements;
        elements.push_back(1);
        answer.push_back(elements);
        if(numRows == 1){
            return answer;
        }
    
        for(int i = 1; i < numRows; ++i){
            elements.clear();
            elements.push_back(1);
            int index = answer.size() - 1;
            for(int j = 0; j < answer[index].size() - 1; ++j){
                int temp = answer[index][j] + answer[index][j + 1];
                elements.push_back(temp);
            }
            elements.push_back(1);
            answer.push_back(elements);
        }
        
        return answer;
    }
    
    
    
};
