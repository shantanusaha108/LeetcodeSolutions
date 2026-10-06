class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int ans = 0;
        for(auto elem : s){
            if(elem=='(' && count<0){
                ans += abs(count);
                count=0;
            }
            if(elem == '(') count++;
            else count--;
        }
        ans+=abs(count);
        return ans;
    }
};