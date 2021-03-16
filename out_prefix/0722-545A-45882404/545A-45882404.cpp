#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	vector<bool> good(n, 1);
	for (int i = 0; i < n; i++) 
		{ for (int j = 0; j < n; j++) 
			{ int x;
			cin >> x;
			if (x <= 0)
				{ continue;
			} else if (x == 1)
				{ good[i] = 0;
			} else if (x == 2)
				{ good[j] = 0;
			} else
				{ good[i] = good[j] = 0;
		} }
	}
	vector<int> sol;
	for (int i = 0; i < n; i++)
		{ if (good[i]) sol.push_back(i + 1);
	} cout << sol.size() << endl;
	if (sol.size() > 0) 
		{ for (int i = 0; i < sol.size(); i++) 
			{ if (i != 0) cout << ' ';
			cout << sol[i];
		}
		cout << endl ;

	}
	return 0;
}
