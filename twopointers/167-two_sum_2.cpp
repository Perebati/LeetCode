//Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;

        while(l < r){
            if(numbers[r] + numbers[l] < target){
                l++;
            }

            if(numbers[r] + numbers[l] > target){
                r--;
            }

            if(numbers[r] + numbers[l] == target){
                return {l + 1, r + 1};
            }
        }

        return {};
    }
};