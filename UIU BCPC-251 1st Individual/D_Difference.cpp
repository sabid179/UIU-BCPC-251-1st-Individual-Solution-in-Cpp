#include <bits/stdc++.h>
using namespace std;

signed main()
{
	long long A, B, C, D;
	cin >> A >> B >> C >> D;

	long long X = (A * B) - (C * D);
	cout << "Difference = " << X << endl;
	return 0;
}