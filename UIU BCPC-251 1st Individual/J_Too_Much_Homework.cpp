#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int X, Y;
	cin >> X >> Y;

	int can_max = X + (Y * 10);

	if (can_max >= 100)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}