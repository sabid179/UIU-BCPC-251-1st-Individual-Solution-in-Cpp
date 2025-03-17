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

		string A;
		cin >> A;

		bool allZ = true;
		for (int i = 0; i < N; i++)
		{
			if (A[i] != 'z')
			{
				allZ = false;
				break;
			}
		}

		if (allZ)
		{
			cout << -1 << endl;
		}
		else
		{
			for (int i = 0; i < N; i++)
			{
				cout << 'z';
			}
			cout << endl;
		}
	}
	return 0;
}