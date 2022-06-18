class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int i, sum = 0;
        for (auto it: nums){
            sum = sum+ it;
        }
          int currSum =0;
        for (i=0;i<nums.size();i++){
          
            if(currSum == sum-nums[i]-currSum)
                return i;
            else
                currSum+=nums[i];
            
        }
        return -1;
    }
};
