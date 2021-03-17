#include <bits/stdc++.h>

using namespace std;

vector<int> v;
int main() 
	{ int n, p, k;
	cin >> n >> p >> k;
	for (int x = p - k; x <= p + k; x++) 
		{ if (x < 1) continue;
		if (x > n) continue;
		v.push_back(x);
	}
	if (v[0] != 1) cout << "<< ";
	for (int(i) = (0); (i) < (((int)v.size())); ++(i)) 
		{ if (v[i] == p) cout << "(";
		cout << v[i];
		if (v[i] == p) cout << ")";
		if (i == ((int)v.size()) - 1) 
			{ if (v[i] < n)
				{ cout << " >>" << endl;
			} else
				{ cout << endl;
		} }  else
			{ cout << " " ;

	} }
	return 0;
}
