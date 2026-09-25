#include<iostream>
#include<vector>




//amar bhava samadhan
//ata optimal in asymptotic complexity , karon jotokhon amar amon akta index pacchi na 
//jeta amader condition ta te fullfill kore tohtokhon son kota no ar oder digits gulo 
//k scan kore jete hobe 
// Time: O(n * d) where d = number of digits
// Since d <= 4, this is effectively O(n).
// Space: O(1)
class Solution {
public:
    int smallestIndex(std::vector<int>& nums) {
        int index = INT_MAX;
        for(size_t i=0 ; i<nums.size(); ++i){
            int temp = nums[i];
            int sum = 0;
            while(temp!=0){
                sum += temp%10;
                temp /= 10;
            }
            if(sum == i){
                if(i<index){
                    index = i; 
                }
            }
        }

        return index != INT_MAX ? index : -1;
    }
};
//kintu aikhane jehetu amar left to right scan korchi mane choto index
//theke boro index er dikhe tai amader first element jeta condition k satisfy kore
//setai e answer hobe --> porer samadhan a aki jinis kora hoyeche ata k modify kore

int main(){
    return 0;
}