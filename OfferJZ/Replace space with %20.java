public class Solution {
    public String replaceSpace(StringBuffer str) {
    	String temp = str.toString();
        str.setLength(0);
        for(int i = 0; i < temp.length(); ++i){
            char c = temp.charAt(i);
            if(c == ' '){
                str.append("%20");
            }
            else {
                str.append(c);
            }
        }
        return str.toString();
    }
    
}
