#include<iostream>
#include<vector>


class Solution {
public:
    int minMoves(std::vector<int>& nums) {
        int max = INT_MIN;
        int sum = 0;
        for(auto elem : nums){
            if(elem > max) max = elem;
            sum += elem;
        }
        
        return (max*nums.size())-sum;
        //A/Q we need to make all elements equal to the max elem
        //so sum of all elements when all elements == maxElem is maxElem * no of elems
        //no we need to find out the total no of operation done to make all the elems = maxElem
        //so if we just find the sum of current elems and subtract that with (maxElem * no fo elem)
        //we will get out req ans
    }
};

int main(){
    return 0;
}