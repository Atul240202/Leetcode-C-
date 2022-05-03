class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        int i = 0;
        
        if (nums.size() == 0) return 0;
        
        for (int j=1; j<len; j++)
        {
            if (nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};

///Question Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
