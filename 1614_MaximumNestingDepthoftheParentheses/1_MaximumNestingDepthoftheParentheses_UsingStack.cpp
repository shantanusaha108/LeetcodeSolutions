#include<iostream>
#include<stack>
#include<string>



class Solution {
public:
    int maxDepth(std::string s) {
        std::stack<char> stck;
        int ans = 0;
        for(const auto& elem : s){
            if(elem == '(') stck.push(elem);
            else if(elem == ')'){
                ans = std::max(static_cast<int>(stck.size()) , ans);
                stck.pop();
            }
        }
        return ans;
    }
};


int main(){
    return 0;
}