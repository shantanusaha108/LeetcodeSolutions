#include<iostream>
#include<string>



class Solution {
public:
    int minAddToMakeValid(std::string s) {
        int count = 0;
        int ans = 0;
        for(auto elem : s){
            if(elem=='(' && count<0){
                ans += std::abs(count);
                count=0;
            }
            if(elem == '(') count++;
            else count--;
        }
        ans+=std::abs(count);
        return ans;
    }
};

int main(){
    return 0;
}