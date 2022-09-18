class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int ans = nums[0];
        int n = nums.size();
        int prod1 = nums[0], prod2 = nums[0];
        for(int i = 1;i<n;i++)
        {
            int temp = max({prod1*nums[i], nums[i], prod2*nums[i]}); 
            prod2 = min({prod1*nums[i], nums[i], prod2*nums[i]});
            prod1 = temp;
            ans = max({ans, prod1, prod2});
        }
        return ans;
    }
};