class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0] != 5)
            return false;
        vector<int>coins(3,0);
        for(int i =0;i < bills.size();i++)
        {
            if(bills[i]==5)
                coins[0]++;
            else if(bills[i] == 10)
            {
                if(coins[0]>0)
                    coins[0]--;
                else
                    return false;
                
                coins[1]++;
            }
            else
            {
                if((coins[0]>0 && coins[1]>0) )
                {
                    coins[0]--;
                    coins[1]--;
                }
                else if(coins[0]>2)
                {
                    coins[0]= coins[0] - 3;
                }
                 else
                     return false;
                
                coins[2]++;
            }
                
        }
        return true;
    }
};