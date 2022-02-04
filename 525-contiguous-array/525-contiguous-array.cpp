class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        
        map<int,int>m;
        
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                sum-=1;
            else 
                sum+=1;
            
            if(m.find(sum)==m.end())
            {
                if(sum==0)
                    ans=max(ans,i+1);
                
                m[sum]=i;
            }
               
            else
            {
                if(sum==0)
                    ans=max(ans,i+1);
                else
                ans=max(ans,i-m[sum]);
              
            }
        }
        return ans;
    }
};