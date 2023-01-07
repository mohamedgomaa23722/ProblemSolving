/*
* 0 ms  
* Link : https://leetcode.com/problems/search-a-2d-matrix/description/
*/
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int blockIndex =0;
        //Get the index of target
        for(int i = 0; i < matrix.length; i++) {
            if(matrix[i][matrix[0].length - 1] < target) {
                blockIndex++;
            } else {
                break;
            }
        }

        return blockIndex <= matrix.length - 1 && (Arrays.binarySearch(matrix[blockIndex], target) >= 0);
    }
}
