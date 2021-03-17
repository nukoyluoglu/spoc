#include <bits/stdc++.h>

using namespace std;

long long fp(long long n, long long p) 
	{ if (p == 0) return 1;
	if (p == 1) return n;
	long long res = fp(n, p / 2);
	res = ((res) * (res));
	if (p % 2) res = (res * n);
	return res;
}
int main() 
	{ pair<int, int> arr[5];
	int a, b, c;
	double s = -1, ss = -1;
	bool f = 0;
	for (int i = 0; i < 3; i++) 
		{ cin >> arr[i].first >> arr[i].second;
		if (i == 1) 
			{ if ((arr[i].first - arr[i - 1].first) != 0) s = (arr[i].second - arr[i - 1].second) / (arr[i].first - arr[i - 1].first);
		}  else if (i == 2) 
			{ if ((arr[i].first - arr[i - 1].first) != 0) ss = (arr[i].second - arr[i - 1].second) / (arr[i].first - arr[i - 1].first);
			if (s == ss) f = 1;
		}
	}
	if (f) return cout << "TOWARDS" << '\n', 0;
	if (arr[0].second > arr[1].second) 
		{ if (arr[2].first > arr[1].first)
			{ return cout << "LEFT" << '\n', 0;
		} else
			{ return cout << "RIGHT" << '\n', 0;
	} }  else if (arr[0].second < arr[1].second) 
		{ if (arr[2].first < arr[1].first)
			{ return cout << "LEFT" << '\n', 0;
		} else
			{ return cout << "RIGHT" << '\n', 0;
	} }  else if (arr[0].second == arr[1].second && arr[0].first < arr[1].first) 
		{ if (arr[2].second > arr[1].second)
			{ return cout << "LEFT" << '\n', 0;
		} else
			{ return cout << "RIGHT" << '\n', 0;
	} }  else if (arr[0].second == arr[1].second && arr[0].first > arr[1].first) 
		{ if (arr[2].second < arr[1].second)
			{ return cout << "LEFT" << '\n', 0;
		} else
			{ return cout << "RIGHT" <<'\n ', 0 ;
	} }
	return 0;
}
