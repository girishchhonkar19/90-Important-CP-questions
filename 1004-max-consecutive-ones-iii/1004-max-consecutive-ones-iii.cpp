class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
       int i=0,j=0;
        while(j<n)
        {
                if(nums[j]==0)
                {
                    if(k!=0)
                    {
                        j++;
                        k--;
                    }
                    else
                    {
                        if(nums[i]==0)
                        {
                            i++;
                            j++;
                        }
                        else
                        {
                            while(i<j && nums[i]==1)
                                i++;
                        }
                    }
                }
            else
            {
                j++;
            }
            ans = max(ans,j-i);
        }
        return ans;
    }
};