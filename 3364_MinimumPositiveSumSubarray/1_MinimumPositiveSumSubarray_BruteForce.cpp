#include<iostream>
#include<vector>
#include<algorithm>


class Solution {
public:
    int minimumSumSubarray(std::vector<int>& nums, int l, int r) {
        int res = 0;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            int j = 1;
            int k = i;
            sum = 0;
            while(j<=r && k<nums.size()){
                sum += nums[k];
                if(sum > 0 && j>=l){
                    if(res == 0) res = sum;
                    else res = std::min(res,sum);
                }
                k++;
                j++;
            }
        }
        if(res == 0) return -1;
        return res;
    }
};


int main(){
    return 0;
}