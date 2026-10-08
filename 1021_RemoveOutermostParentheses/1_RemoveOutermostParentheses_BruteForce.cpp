#include<iostream>
#include<string>


class Solution {
public:
    std::string removeOuterParentheses(std::string s) {
        int count = 0;
        int index = 0;
        int i = 0;
        std::string ans;
        for(const auto& elem : s){
            if(elem == '(') count++;
            else count--;
            if(count == 0){
                for(size_t j=index+1; j<i; j++){
                    ans.push_back(s[j]);
                }
                index = i+1;
            }
            i++;
        }
        return ans;
    }
};


int main(){
    return 0;
}