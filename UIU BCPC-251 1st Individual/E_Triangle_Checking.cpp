#include <bits/stdc++.h>
using namespace std;

signed main()
{
	long long A, B, C;
	cin >> A >> B >> C;

	if ((A + B) > C && (B + C) > A && (A + C) > B)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}