#include<iostream>
#include<string>
#include<cmath>



class Solution {
public:
    std::string maxSumOfSquares(int num, int sum) {
        int low  = std::pow(10,num-1);
        int high  = std::pow(10,num)-1;
        int ans = INT_MIN;
        while(low<=high){
            int temp = low;
            int sum1 = 0;
            while(temp!=0){
                sum1 += temp%10;
                temp /= 10;
            }
            if(sum1 == sum){
                ans = std::max(ans,low);
            }
            low++;
        }
        return (ans == INT_MIN) ? "" : std::to_string(ans);
    }
};


int main(){
    Solution sol;
    std::cout<<sol.maxSumOfSquares(7,43)<<std::endl;
    return 0;
}