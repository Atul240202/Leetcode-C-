class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int num;
        sort(nums.begin(), nums.end());
        for (int i=1; i<nums.size();i++)
        {
            if (nums[i]==nums[i-1])
            {
                num = nums[i];
            }
        }
        return num;
        
    }
};
