class Solution {
    public String licenseKeyFormatting(String s, int k) {
        StringBuilder sb = new StringBuilder();
        for (int i = s.length() - 1; i >= 0; i--)
            if (s.charAt(i) != '-')
                sb.append(sb.length() % (k + 1) == k ? '-' : "").append(s.charAt(i));
        return sb.reverse().toString().toUpperCase();
    }
}


// sb.length() % (k + 1) == k 
// The for loop and the if condition together skip the '-' in the input string and whenever 
// the sb StringBuilder is a multiple of k we add '-' to the string builder. sb.length() % (k + 1) == k
// is a way to check if it's a multiple of k or not using modulo arithmetic.

