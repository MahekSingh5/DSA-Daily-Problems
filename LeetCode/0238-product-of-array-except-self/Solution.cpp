class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int>op(size, 1);
        int prefix = 1;
        for(int i=0; i<size; i++){
            op[i] = prefix;
            prefix *= nums[i]; 
        }
        int suffix = 1;
        for(int i=size-1; i>=0; i--){
            op[i] *= suffix;
            suffix *= nums[i];
        }
        return op;
    }
};