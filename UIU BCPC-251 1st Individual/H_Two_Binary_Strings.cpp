#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;

		int iteration_count = a.length() - 1;

		bool flag = false;
		for (int i = 0; i < iteration_count; i++)
		{
			if (a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1')
			{
				flag = true;
				break;
			}
		}

		if (flag)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}