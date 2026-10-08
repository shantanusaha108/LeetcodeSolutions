#include<iostream>
#include<string>


class Solution {
public:
    std::string removeOuterParentheses(std::string s) {
        int count = 0;
        std::string ans;
        for(const auto& elem : s){
            if(elem == '('){
                if(count > 0) ans.push_back(elem);
                count++;
            }
            else {
                count--;
                if(count > 0) ans.push_back(elem);
            }
            
        }
        return ans;
    }
};


int main(){
    return 0;
}