class Solution {
    public boolean isMatch(String text, String pattern) {
        if(pattern.isEmpty()) return text.isEmpty(); //  if both are empty
        boolean first_match = (                                      // the current char of both are the same 
            !text.isEmpty() &&
            (pattern.charAt(0) == text.charAt(0) || pattern.charAt(0) == '.')
        );
        // above code is directly match method to judge whether they are match for the first character
        if(pattern.length() >= 2 && pattern.charAt(1) == '*'){
            return (
                isMatch(text, pattern.substring(2)) || //ignore (the pattern * as 0 way)
                   (first_match && isMatch(text.substring(1), pattern)) // circyle the * character
            );
        } else {
            return first_match && isMatch(text.substring(1), pattern.substring(1));
        }
        
    }
}
