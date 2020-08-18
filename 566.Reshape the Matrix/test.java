class Solution {
    public int[][] matrixReshape(int[][] nums, int r, int c) {
        int n = nums.length;
        int m = nums[0].length;
        if(r*c != n*m || r == n) return nums;
        int[][] res = new int[r][c];
        
		AtomicInteger ai = new AtomicInteger();
		Arrays.stream(nums)
				.flatMapToInt(Arrays::stream)
				.forEach(x -> res[ ai.get() / c ][ ai.getAndIncrement() % c ] = x);
        return res;
    }
}
