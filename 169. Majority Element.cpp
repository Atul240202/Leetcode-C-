class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count=0, a;
        for (int i=0; i<n; i++){
            if (count == 0) a = nums[i];
            if (a == nums[i]) count++;
            else count--;
        }
    return a;
    }
};
