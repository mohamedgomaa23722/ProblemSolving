class Solution {
  // Using kadane's Algorithm
  //Link:  https://leetcode.com/problems/maximum-subarray/?envType=study-plan&id=data-structure-i
    public int maxSubArray(int[] nums) {
        int bestSum=nums[0];
        int currentSum=nums[0];
        for (int i =1; i < nums.length; i++) {
                currentSum = Integer.max(nums[i],currentSum+nums[i]);
                bestSum = Integer.max(currentSum,bestSum);
        }
        return bestSum;           
    }
}
