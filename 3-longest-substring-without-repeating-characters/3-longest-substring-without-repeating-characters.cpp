class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int>pos(256,-1);
        int res = 0;
        int n =s.size();
        
        int left = 0;
        
        for(int right = 0;right < n; right++)
        {
            left = max(left,pos[s[right]]+1);
            res = max(res, right - left +1);
            pos[s[right]]= right;
        }
        return res;
    }
};