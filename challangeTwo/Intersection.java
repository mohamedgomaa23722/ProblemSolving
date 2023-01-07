/*Solution 1
* space comp is better than solution 2
* Link : https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
*/
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        //Map contain Index as (j) key and value of that index
        // i : index of current item in nums 1
        // j : index of current item in nums 2
        Map<Integer, Integer> map = new HashMap<>();

        outer:for (int i = 0; i < nums1.length; i++) {
            for (int j = 0; j < nums2.length; j++) {
                if (nums1[i] == nums2[j] && !map.containsKey(j)) {
                    map.put(j, nums1[i]);
                    continue outer;
                }
            }
        }
        
        int[] res = new int[map.size()];
        int i = 0;
        for (int value : map.values()) {
            res[i++] = value;
        }

        return res;
    }
}

/*Solution 2
* Time comp is less than solution 1 
*/
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        //Map contain Index as key and value of that index
        Map<Integer, Integer> map = new HashMap<>();
        List<Integer> arr = new ArrayList<>();

        for (int num : nums1) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        for (int num : nums2) {
            if (map.containsKey(num) && map.get(num) > 0){
                arr.add(num);
                map.put(num, map.get(num) - 1);
            }
        }

        int[] res = new int[arr.size()];
        for (int i = 0; i < arr.size(); i++) {
            res[i] = arr.get(i);
        }
        return res;
    }
}
