//Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

//Example 1:
//Input: [3,0,1]
//Output: 2



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int all_sum = (n * (n+1))/2;
        for(int num : nums){
            all_sum -= num;
        }
        
        return all_sum;
    }
};
