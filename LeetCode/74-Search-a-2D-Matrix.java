class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m = 0;
        int n = matrix[0].length-1;
        while(m<matrix.length && n>=0){
            if(matrix[m][n]==target){
                return true;
            }
            else if(matrix[m][n]>target){
                n--;
            }
            else if(matrix[m][n]<target){
                m++;
            }
        }
        return false;
    }
}
