#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	vector<int> x;
	for (int i = 0; i < n; i++) 
		{ int m;
		cin >> m;
		x.push_back(m);
	}
	int s, t;
	cin >> s >> t;
	int count1 = 0, count2 = 0;
	s = s + n;
	for (int i = s - 1;; i++) 
		{ if (i % n == t - 1)
			{ break;
		} else
			{ count1 = count1 + x[i % n];
	} }
	s--;
	for (int i = s - 1;; i--) 
		{ if (i % n == t - 1) 
			{ count2 = count2 + x[i % n];
			break;
		}  else
			{ count2 = count2 + x[i % n];
	} }
	if (count1 <= count2) 
		{ cout << count1 << endl;
	}  else
		{ cout << count2 << endl ;

	} return 0;
}
