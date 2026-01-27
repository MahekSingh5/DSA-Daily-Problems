1class Solution {
2public:
3    int minSwaps(vector<int>& nums) {
4        int ones = 0;
5        for(int x : nums) ones+=x;
6        if(ones == 0) return 0;
7        vector<int> arr = nums;
8        arr.insert(arr.end(), nums.begin(), nums.end());
9        int currOnes = 0, maxOnes = 0;
10        int left = 0;
11        for(int right = 0; right < arr.size(); right++){
12            currOnes += arr[right];
13            if(right - left + 1 > ones){
14                currOnes -= arr[left];
15                left++;
16            }
17            if(right - left + 1 == ones){
18                maxOnes = max(maxOnes, currOnes);
19            }
20        }
21        return ones - maxOnes;
22    }
23};