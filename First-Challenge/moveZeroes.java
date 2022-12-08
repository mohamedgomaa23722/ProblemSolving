
// Link: https://leetcode.com/problems/move-zeroes/solutions/
class Solution {

    public static void moveZeroes(int[] nums) {
        int current=0;
        for (int i = 0; i < nums.length ; i++) {
            if (nums[i] !=0 && nums[current] == 0){
                swap(nums,current++,i);
            }else if(nums[i] !=0 && nums[current] != 0){
                current++;
            }
        }
    }

    public static void swap(int[] nums, int n1, int n2) {
        int temp = nums[n1];
        nums[n1] = nums[n2];
        nums[n2] = temp;
    }
}
