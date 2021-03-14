#include <bits/stdc++.h>

using namespace std;

void desperate_optimization(int precision) 
	{ cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(precision);
}
int main() 
	{ desperate_optimization(10);
	int n, k;
	cin >> n >> k;
	if (k == 0 && n != 1) 
		{ cout << "No solution" << '\n';
		return 0;
	}
	if (k == 0)
		{ cout << 0 << '\n';
	} else 
		{ cout << k;
		for (int i = 1; i < n; i++) cout << 0;
		cout <<'\n';

	}
	return 0;
}
