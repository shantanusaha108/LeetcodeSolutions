class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0 ;
        for(size_t i=0; i<nums.size(); ++i){
            unordered_set<int> hashSet;
            for(size_t j=i; j<nums.size(); ++j){
                hashSet.insert(nums[j]);
                ans += (hashSet.size() * hashSet.size());
            }
        }
        return ans;
    }
};