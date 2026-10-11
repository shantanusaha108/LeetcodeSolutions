#include<iostream>
#include<vector>


class Solution {
public:
    int sumOfSquares(std::vector<int>& nums) {
        int ans = 0;
        int n = static_cast<int>(nums.size());
        for(int i=0; i<nums.size(); ++i){
            if(n%(i+1) == 0){
                ans += nums[i]*nums[i];
            }
        }
        return ans;
    }
};


int main(){
    return 0;
}