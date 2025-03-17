#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N;
		cin >> N;

		int A[N];
		map<int, int> mp;

		for (int i = 0; i < N; i++)
		{
			cin >> A[i];
			mp[A[i]]++;
		}

		int ans = 0;

		bool zero_exist = (mp[0] != 0);
		for (auto [x, y] : mp)
		{
			if (x == 0 && y > 0)
			{
				ans++;
				continue;
			}
			ans += (y % 2);
		}

		if (not(zero_exist))
		{
			ans++;
		}

		cout << min(ans, N) << endl;
	}
	return 0;
}