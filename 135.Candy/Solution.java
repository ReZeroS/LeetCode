
import java.util.Arrays;


public class Solution {
    public int candy(int[] ratings) {
        int[] candies = new int[ratings.length];
        Arrays.fill(candies, 1);
        // 多段 正向的单调递增列
        for (int i = 1; i < ratings.length; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // 多段 逆向的单调递增列， 注意下不要把正向设置好的给拉下来了
        for (int i = candies.length - 1; i > 0; i--) {
            if (ratings[i - 1] > ratings[i]) {
                candies[i - 1] = Math.max(candies[i] + 1, candies[i - 1]);
            }
        }

        return Arrays.stream(candies).sum();
    }
}