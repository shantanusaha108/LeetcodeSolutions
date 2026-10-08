class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans;
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