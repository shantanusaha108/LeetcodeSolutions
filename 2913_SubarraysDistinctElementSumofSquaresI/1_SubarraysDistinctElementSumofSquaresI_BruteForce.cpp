#include<iostream>
#include<vector>
#include<unordered_set>

class Solution {
public:
    int sumCounts(std::vector<int>& nums) {
        int ans = 0 ;
        for(size_t i=0; i<nums.size(); ++i){
            std::unordered_set<int> hashSet;
            for(size_t j=i; j<nums.size(); ++j){
                hashSet.insert(nums[j]);
                ans += (hashSet.size() * hashSet.size());
            }
        }
        return ans;
    }
};

int main(){
    return 0;
}