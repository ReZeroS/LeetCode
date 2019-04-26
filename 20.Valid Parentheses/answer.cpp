 bool isValid(string s) {
    stack<char> map;
    for(auto c:s) {
        if (c == ')' || c == ']' || c == '}') {
            if(!map.empty() && map.top() == c) map.pop();
            else return false; 
        } 
        switch (c) {
            case '(': map.push(')'); break;
            case '[': map.push(']'); break;
            case '{': map.push('}'); break;
        }
    }
    return map.empty();
}
