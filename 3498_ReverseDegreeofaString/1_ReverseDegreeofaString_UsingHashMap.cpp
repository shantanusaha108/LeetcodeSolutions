#include<iostream>


class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> hashMap;
        char st = 'a';
        for(int i=26 ; i>=1; --i){
            hashMap[st] = i;
            st++;
        }
        int ans = 0;
        for(int i=1 ; i<=s.size(); i++){
            ans += (i * hashMap[s[i-1]]);
        }
        return ans;
    }
};

int main(){
    return 0;
}