class Solution {
    //1ms
    // link: https://leetcode.com/problems/squares-of-a-sorted-array/description/
    public int[] sortedSquares(int[] nums) {
        int low = 0, high = nums.length - 1;
        int[] result = new int[nums.length];
        int index=high;
        while (low <= high) {
            if (Math.abs(nums[high]) > Math.abs(nums[low])) {
                result[index--] = nums[high] * nums[high--];
            } else {
                result[index--] = nums[low] * nums[low++];
            }
        }
        return result;        
    }
}
