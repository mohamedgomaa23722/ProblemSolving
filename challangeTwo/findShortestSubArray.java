//Link : https://leetcode.com/problems/degree-of-an-array/submissions/873744218/
class Solution {
    public int findShortestSubArray(int[] nums) {
        //First find degree of the array
        Map<Integer, Integer> map = new HashMap<>();
        int minLength = Integer.MAX_VALUE, hDegree = 0;

        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
            if (map.get(nums[i]) > hDegree)
                hDegree = map.get(nums[i]);
        }

        for (int key : map.keySet()) {
            if (map.get(key) == hDegree) {
                int start = 0, end = nums.length - 1;
                while (nums[start] != key || nums[end] != key) {
                    if (nums[start] != key)
                        start++;
                    else if (nums[end] != key) {
                        end--;
                    }
                }

                if (minLength > end - start + 1) {
                    minLength = end - start + 1;
                }
            }
        }
        return minLength;
    }
}
