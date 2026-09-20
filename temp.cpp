class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int smallestSize = INT_MAX;
        int secondSmallestSize = INT_MAX;
        for(size_t i=0; i<arr.size(); i++){
            int temp = 0;
            for(size_t j=i; j<arr.size(); j++){
                temp += arr[j];
                if(temp == target){
                    if(j-i+1 < smallestSize){
                        secondSmallestSize = std::min(secondSmallestSize , smallestSize);
                        int t = j-i+1;
                        smallestSize = std::min(smallestSize , t);
                    }
                }
            }
        }

        if(smallestSize + secondSmallestSize > 0) return secondSmallestSize + smallestSize;
        else return -1;
    }
};