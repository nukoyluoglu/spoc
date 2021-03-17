#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, m, a, b;
	cin >> n >> m >> a >> b;
	int sum = a * n;
	int msum = b;
	int rides = m;
	while (rides <= n) 
		{ msum += b;
		rides += m;
	}
	msum -= b;
	rides -= m;
	if (sum <= msum) 
		{ cout << sum << "\n";
	}  else 
		{ if (rides < n) 
			{ int newsum = msum + (n - rides) * a;
			msum += b;
			rides += m;
			int newsum1 = msum;
			if (newsum1 <= newsum)
				{ cout << newsum1 << endl;
			} else
				{ cout << newsum << endl;
		} }  else if (rides > n) 
			{ int newsum = msum + (n - rides) * a;
			msum += b;
			rides += m;
			int newsum1 = msum;
			if (newsum1 <= newsum)
				{ cout << newsum1 << endl;
			} else
				{ cout << newsum << endl;
		} }  else 
			{ cout << msum << endl ;
		}
	}
}
