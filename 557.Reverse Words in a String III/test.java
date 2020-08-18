class Solution {
    public String reverseWords(String s) {
    Stack<Character> st = new Stack();
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i<s.length(); i++){
            char c = s.charAt(i);
            if(c != ' '){
                st.push(c);
            }else{
                int n = st.size();
                for(int j = 0; j<n;j++){
                    sb.append(st.pop());
                }
                sb.append(' ');
            }
        }
        if(!st.isEmpty()){
            int n = st.size();
            for(int j = 0; j<n;j++){
                    sb.append(st.pop());
                }
        }
        return sb.toString();
    }
}
