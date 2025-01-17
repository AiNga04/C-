#include<bits/stdc++.h>

using namespace std;

string x, y;
void DP()
{
	cin >> x >> y;
	int n = x.size(), m = y.size();
	int dp[n + 1][m + 1];
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			if(i == 0 || j == 0)
			{
				dp[i][j] = 0;
			}
			else
			{
				if(x[i - 1] == y[j - 1])
				{
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else
				{
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
	}
	cout << dp[n][m] << "\n";
}

int main()
{
	DP();
}
