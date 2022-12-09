class Solution {
  // link : https://leetcode.com/problems/merge-sorted-array/description/
  // 0ms
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        if(n==0) return;
        int i=0, j=0,A=0;
        int [] mergedArray = new int[m+n];
        while(m > i && n > j){
            if (nums1[i] < nums2[j]){
                mergedArray[A++] = nums1[i++];
            }else {
                mergedArray[A++] = nums2[j++];
            }
        }

        while(m != i)  mergedArray[A++] = nums1[i++];
        while(n != j)  mergedArray[A++] = nums2[j++];

        for (int k = 0; k < mergedArray.length ; k++) {
            nums1[k] = mergedArray[k];
        }        
    }
}
