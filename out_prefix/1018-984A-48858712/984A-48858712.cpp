#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) 
		{ int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.begin() + n, greater<int>());
	int turn = 0;
	while (v.size() != 1) 
		{ if (turn % 2 == 0) 
			{ v.erase(v.begin());
		}  else 
			{ v.pop_back();
		}
		turn = (++turn) % 2;
	}
	cout << v. first << endl ;

	return 0;
}
