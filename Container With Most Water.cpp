class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, i = 0, j = height.size()-1, res = 0;
        while (i < j) {
            if (height[i] <= height[j]) {
                res = height[i] * (j - i);
                i++;
            } else {
                res = height[j] * (j - i);
                j--;
            }
            if (res > ans) ans = res;
        }
        return ans;
        
    }
};


///Question Link: https://leetcode.com/problems/container-with-most-water/

/*Approach Explaination: Question mai hume nikalna hai ki konse time prr rectangular/square container ki capacity sbse jyada hogi on the basis of array input to simple isme 
formula lagega Area= Length*Breadth. Abb question is simple Length=Height[i] or Height[j] inme se jo bhi chota ho & Breadth = j-i and abb krte jao multiply jiska area bada hga
woh answer hoga*/
