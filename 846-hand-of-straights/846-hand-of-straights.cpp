class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize !=0)
            return false;
        
        map<int,int>m;
        for(auto i:hand)
            m[i]++;
        while(m.size()>0)
        {
        int first = m.begin()->first;
        
        for(int i = first; i < first+groupSize;i++)
        {
            if(m.find(i)!=m.end())
            {
                if(m[i]==1)
                    m.erase(i);
                else
                    m[i]--;
            }
            else
            {
                return false;
            }
        }
            
        }
        return true;
    }
};