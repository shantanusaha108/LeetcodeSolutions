#include<iostream>
#include<vector>


class Solution {
public:
    int sumOfSquares(std::vector<int>& nums) {
        int ans = 0;
        int n = static_cast<int>(nums.size());
        for(int i=1; i<=n/i; ++i){
            if(n%i == 0){
                ans += nums[i-1]*nums[i-1];

                int quotientPair = n/i;
                if(quotientPair != i){
                    ans += nums[quotientPair-1] * nums[quotientPair-1];
                }
            }
        }
        return ans;
    }
};


int main(){
    return 0;
}