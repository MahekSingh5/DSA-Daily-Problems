1class Solution {
2    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
3        ArrayList<Boolean>ans = new ArrayList<>();
4        int max = -1;
5        for(int i=0; i<candies.length; i++){
6            if(max < candies[i])max = candies[i];
7        }
8        for(int i=0; i<candies.length; i++){
9            if(candies[i] + extraCandies >= max){
10                ans.add(true);
11            }else{
12                ans.add(false);
13            }
14        }
15        return ans;
16    }
17}