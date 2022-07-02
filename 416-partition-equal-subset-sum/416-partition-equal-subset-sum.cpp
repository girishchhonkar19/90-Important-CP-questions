class Solution {
public:
    bool canPartition(vector<int>& arr) {
    
    int n=arr.size();
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}

	vector<vector<bool>>dp(n + 1, vector<bool>((sum / 2)+1, false));

	for (int i = 0; i <= n; i++)
		dp[i][0] = true;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= (sum / 2)+1; j++)
		{
            dp[i][j] = dp[i - 1][j];
			if (j >= arr[i - 1])
				dp[i][j] = dp[i][j] || dp[i - 1][j - arr[i - 1]];
		}
	}
	//cout << dp[n][sum / 2];
	if (sum % 2 == 0) {
		if (dp[n][sum / 2] == true)
			return true;
		else
			return false;

	}
	else
		return false;
    }
};