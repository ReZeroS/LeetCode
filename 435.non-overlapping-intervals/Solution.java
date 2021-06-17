import java.util.Arrays;

class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> a[1] - b[1]);
        int total = 0, prev = intervals[0][1];
        for (int i = 1; i < intervals.length; i++) {
            if (intervals[i][0] < prev) {
                total++;
            } else {
                prev = intervals[i][1];
            }
        }
        return total;
    }
    //在选择要保留区间时，区间的结尾十分重要：选择的区间结尾越小，余留给其它区间的空间
    //就越大，就越能保留更多的区间。因此，我们采取的贪心策略为，优先保留结尾小且不相交的区间。
}