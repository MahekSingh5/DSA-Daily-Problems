1class Solution {
2    public int search(int[] nums, int target) {
3        int st = 0, end = nums.length-1;
4        while(st<=end){
5            int mid = st + (end-st)/2;
6            if(nums[mid] == target)return mid;
7            if(nums[st] <= nums[mid]){
8                if((target <= nums[mid] && target >= nums[st])){
9                    end =  mid - 1;
10                }else{
11                    st = mid + 1;
12                }
13            }else{
14                if(target >= nums[mid] && target <= nums[end]){
15                    st = mid + 1;
16                }else{
17                    end = mid -1 ;
18                }
19            }
20        }
21        return -1;
22    }
23}