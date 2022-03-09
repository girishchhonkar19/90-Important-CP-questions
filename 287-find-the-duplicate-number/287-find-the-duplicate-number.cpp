class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n+1,0);
        
        for(int i=0;i<nums.size();i++)
            arr[nums[i]]++;
        
        for(int i=0;i<n+1;i++)
        {
            if(arr[i]>1)
                return i;
        }
        return 0;
    }
};