1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        priority_queue<int> pq;
5        unordered_map<int, int>hash;
6        for(int i=0; i<nums.size(); i++){
7            pq.push(nums[i]);
8            hash[nums[i]]++;
9        }
10        vector<int>ans;
11        for(int i=0; i<k; i++){
12            auto maxEl = max_element(hash.begin(), hash.end(),[](auto &a, auto &b) {return a.second < b.second;});
13            ans.push_back(maxEl->first);
14            hash.erase(maxEl);
15        }
16    return ans;
17    }
18};