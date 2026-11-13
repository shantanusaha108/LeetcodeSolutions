#include<iostream>
#include<vector>
#include<algorithm>



class Solution {
public:
    int longestMonotonicSubarray(std::vector<int>& nums) {
        int res = 0;
        int strctInc = 0;
        int strctDec = 0;
        for(size_t i=0; i<nums.size()-1; i++){
            strctInc = 0;
            strctDec = 0;
            for(size_t j=i+1; j<nums.size(); j++){
                if(nums[j-1] < nums[j]){
                    strctInc++;
                    strctDec = 0;
                    res = std::max(res,strctInc);
                }
                else if(nums[j-1] > nums[j]){
                    strctInc = 0;
                    strctDec++;
                    res = std::max(res,strctDec);
                }else{
                    res = std::max({res,strctDec,strctInc});
                    strctInc = 0;
                    strctDec = 0;
                }
            }
        }
        return res+1;
    }
};



int main(){
    return 0;
}