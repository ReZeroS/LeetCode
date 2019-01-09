public class Solution {
   public boolean Find(int target, int [][] array) {
        if (array == null){
            return false;
        }
        int rows = array.length;
        int cols = array[0].length;
        int row = 0, col = cols -1;
        while(row < rows && col >= 0){
            if(array[row][col] == target){
                return true;
            }
            if(target < array[row][col]){
                col -= 1;
                continue;
            }
            if(target > array[row][col]) {
                row += 1;
                continue;
            }
        }
        return false;
    }
}
