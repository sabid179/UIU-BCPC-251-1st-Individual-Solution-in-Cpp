#include <bits/stdc++.h>
using namespace std;

signed main()
{
	long long N, M;
	cin >> N >> M;

	int ans = (N % 10) + (M % 10);
	cout << ans << endl;
	return 0;
}