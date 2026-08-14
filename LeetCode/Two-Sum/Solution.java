1class Solution {
2    public int[] twoSum(int[] nums, int target) {
3        HashMap<Integer, Integer>map = new HashMap<>();
4        for(int i=0; i<nums.length; i++){
5            int a = nums[i];
6            int b = target - nums[i];
7            if(map.containsKey(b)){
8                return new int[]{map.get(b), i};
9            }
10            map.put(a, i);
11        }
12        return new int[]{};
13    }
14}