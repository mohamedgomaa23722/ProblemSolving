    public int[] twoSum(int[] nums, int target) {
       HashMap<Integer, Integer> numbers = new HashMap<>();
        int[] res = new int[2];
        for (int i = 1; i < nums.length; i++) {
            numbers.put(nums[i], i);
        }

        for (int i = 0; i < nums.length; i++) {
            int targetRes = numbers.getOrDefault(target - nums[i], -1);
            if (targetRes != -1 && targetRes != i) {
                res[0] = i;
                res[1] = targetRes;
                return res;
            }
        }
        return res;
    }
