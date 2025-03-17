#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int T;
	cin >> T;

	while (T != 0)
	{
		T--;

		int N;
		cin >> N;

		int A[N];
		for (int i = 0; i < N; i++)
		{
			cin >> A[i];
		}

		int maxx = INT_MIN;

		for (int i = 0; i < N; i++)
		{
			if (A[i] > maxx)
			{
				cout << 1 << ' ';
			}
			else
			{
				cout << 0 << ' ';
			}

			maxx = max(maxx, A[i]);
		}

		cout << endl;
	}
	return 0;
}