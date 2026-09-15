#include<iostream>
#include<string>


class Solution {
public:
    int maxPalindromes(std::string s, int k) {
        int lastSunStrEnd = 0 , ans = 0 ;
        for(size_t i=0 ;i<s.size(); i++){
            int left = i, right = i;
            while(left>=lastSunStrEnd && right<s.size() && s[left]==s[right]){
                if(right-left+1 >= k){
                    lastSunStrEnd = right+1;
                    ans++;
                    break;
                }
                left--;
                right++;
            }

            if(lastSunStrEnd > i) continue;

            left = i;
            right = i+1;
            while(left>=lastSunStrEnd && right<s.size() && s[left]==s[right]){
                if(right-left+1 >= k){
                    lastSunStrEnd = right+1;
                    ans++;
                    break;
                }
                left--;
                right++;
            }

        }
        return ans;
    }
};

int main(){
    return 0;
}