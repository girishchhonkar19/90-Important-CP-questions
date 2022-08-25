class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        map<int,int>m;
        int sum = 0;
        int res = 0;
        m[0] = 1;
        for(int i = 0;i<n;i++)
        {
            sum += nums[i]%2;
            res += m[sum-k];
            m[sum]++;
        }
        return res;
    }
};