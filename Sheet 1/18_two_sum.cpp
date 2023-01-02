// Link: https://leetcode.com/problems/two-sum/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int pos1 = -1, pos2 = -1;

        for(int i=0; i<nums.size()-1; i++) {
            const int el = nums[i];
            pos1 = i;

            for(int j=i+1; j<nums.size(); j++) {
                if(nums[j]==target-el) {
                    pos2=j;
                    break;
                }
            }
            if(pos2!=-1) break;
        }

        vector<int> arr = {pos1, pos2};
        return arr;
    }
};