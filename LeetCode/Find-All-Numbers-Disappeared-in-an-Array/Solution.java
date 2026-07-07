1class Solution {
2    public List<Integer> findDisappearedNumbers(int[] nums) {
3        ArrayList<Boolean> ans = new ArrayList<>();
4        for (int i = 0; i < nums.length; i++) {
5            ans.add(false);
6        }
7        for (int i = 0; i < nums.length; i++) {
8            ans.set(nums[i] - 1, true);
9        }
10        List<Integer> res = new ArrayList<>();
11        for(int i=0; i<nums.length; i++){
12            if(ans.get(i) == false){
13                res.add(i+1);
14            }
15        }
16        return res;
17    }
18}