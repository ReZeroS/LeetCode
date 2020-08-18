class Solution {
    public int distributeCandies(int[] candies) {
        // int cast is viable since the max distinct values possible would simply 
        // equal candies.length, which is bounded by 10,000
        return Math.min(candies.length / 2, (int) Arrays.stream(candies).distinct().count());
    }
}
