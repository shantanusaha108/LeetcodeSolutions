#include<iostream>
#include<vector>


class Solution {
public:
    int numOfSubarrays(std::vector<int>& arr) {
        long long ans = 0;
        const int MOD = 1e9 + 7;
        for(size_t i=0; i<arr.size(); ++i){
            int sum = 0;
            for(size_t j=i; j<arr.size(); j++){
                sum += arr[j];
                if(sum%2 != 0) ans++;
            }
        }
        return ans%MOD;
    }
};

int main(){
    return 0;
}