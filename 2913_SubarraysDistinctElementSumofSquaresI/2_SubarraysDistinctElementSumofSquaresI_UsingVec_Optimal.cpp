#include<iostream>
#include<vector>

class Solution {
public:
    int sumCounts(std::vector<int>& nums) {
        int ans = 0 ;
        for(size_t i=0; i<nums.size(); ++i){
            std::vector<bool> trackUnique(101,false);
            int distinct  = 0;
            for(size_t j=i; j<nums.size(); ++j){
                if(!trackUnique[nums[j]]){
                    trackUnique[nums[j]] = true;
                    distinct ++;
                }
                ans += distinct*distinct;
            }
        }
        return ans;
    }
};

int main(){
    return 0;
}