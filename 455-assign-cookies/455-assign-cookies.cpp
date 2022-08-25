class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(), s.end());
        
        int n = s.size(),m=g.size();
        int i = 0, j= 0;
        int count = 0;
        while(i < n && j < m)
        {
            if(s[i] >= g[j])
            {
                count++;
                i++;j++;
            }
            else
            {
                i++;
            }
        }
        return count;
    }
};