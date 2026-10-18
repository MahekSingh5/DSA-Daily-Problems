class Solution {
    public int maxArea(int[] height) {
        int maxwater = 0;
        int lp = 0; 
        int rp = height.length-1;
        while(lp<rp){
            int w = rp-lp;
            int h = Math.min(height[rp],height[lp]);
            int currentwater = h*w;
            maxwater = Math.max(currentwater, maxwater);
            if(height[lp]<height[rp]){
                lp++;
            }else{
                rp--;
            }
        }
        return maxwater;
    }
}