#include<iostream>
#include<vector>


class Solution {
public:
    int minMoves(std::vector<int>& nums) {
        int max = INT_MIN;
        for(auto elem : nums){
            if(elem > max) max = elem;
        }
        int ans = 0;
        for(auto elem : nums){
            ans += max - elem;
        }
        return ans;
    }
};

int main(){
    return 0;
}