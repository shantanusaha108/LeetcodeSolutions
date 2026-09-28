#include<iostream>
#include<string>



class Solution {
public:
    int maxDepth(std::string s) {
        int ans = 0;
        int temp = 0;
        for(const auto& elem : s){
            if(elem == '(') temp++;
            else if(elem == ')'){
                ans = std::max(temp , ans);
                temp--;
            }
        }
        return ans;
    }
};


int main(){
    return 0;
}