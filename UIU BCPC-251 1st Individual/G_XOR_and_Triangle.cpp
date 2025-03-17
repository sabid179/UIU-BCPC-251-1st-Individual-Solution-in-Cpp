#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int t;
	cin >> t;

	while (t != 0)
	{
		t--;

		int x;
		cin >> x;

		int ans = -1;

		for (int i = 0; i < 30; i++)
		{
			for (int j = 0; j < 30; j++)
			{
				int y = (1 << i) | (1 << j);
				if (y < x && x + y > (x ^ y) && y + (x ^ y) > x)
				{
					ans = y;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}