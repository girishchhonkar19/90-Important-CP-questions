class Solution {
public:
    int characterReplacement(string s, int k) {
        int n =s.size();
        if(k >= n)
            return n;
        map<char,int>m;
        int i = 0,j = 0;
        int maxi = 0;
        int ans =0;
        while(j<n)
        {
            m[s[j]]++;
            maxi = max(maxi, m[s[j]]);
            if(j-i+1 - maxi > k)
            {
                m[s[i]]--;
                i++;
            }
            j++;
            ans = max(ans, j-i+1);
        }
        return ans-1;
    }
};