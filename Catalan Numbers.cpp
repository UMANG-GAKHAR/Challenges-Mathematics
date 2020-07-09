#include<bits/stdc++.h>
using namespace std;

void catalan(long long *dp, long long n)
{
	dp[0] = dp[1] = 1;
	for (long long i = 2; i <= n; i++)
	{
		dp[i] = 0;
		for (long long j = 0; j < i; j++)
		{
			dp[i] += dp[j] * dp[i - j - 1];
		}
	}
}

int main() {
	long long dp[101] = {0};
	long long n;
	cin >> n;
	catalan(dp, n);

	cout << dp[n];

	return 0;
}
