#include<iostream>
#include<vector>


class Solution {
public:
    int smallestIndex(std::vector<int>& nums) {
        int index = INT_MAX;
        for(size_t i=0 ; i<nums.size(); ++i){
            int temp = nums[i];
            int sum = 0;
            while(temp!=0){
                sum += temp%10;
                temp /= 10;
            }
            if(sum == i){
                return i;
            }
        }

        return -1;
    }
};


int main(){
    return 0;
}