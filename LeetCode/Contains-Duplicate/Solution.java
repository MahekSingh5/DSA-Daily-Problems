1class Solution {
2    public boolean containsDuplicate(int[] nums) {
3        HashMap<Integer, Integer> map = new HashMap<>();
4        for(int n : nums){
5            if(map.containsKey(n)){
6                return true;
7            }
8            map.put(n,1);
9        }
10        return false;
11    }
12}