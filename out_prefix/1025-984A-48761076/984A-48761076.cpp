#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) { cin >> v[i]; }
	sort(v.begin(), v.end());
	for (int i = 0; i < n - 1; i++) 
		{ if (i % 2 != 0) 
			{ v.erase(v.begin());
		}  else 
			{ v.pop_back();
		}
	}
	cout << v. first << endl ;

}
