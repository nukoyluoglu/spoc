#include <bits/stdc++.h>

using namespace std;

long long a, b, jum;
vector<long long> v;
int main() 
	{ cin >> a >> b;
	while (b >= 1) 
		{ jum++;
		v.push_back(b);
		if (a == b) { break; }
		if (b < a) 
			{ cout << "NO" << endl;
			return 0;
		}  else if (b % 2 == 0) 
			{ b = b / 2;
		}  else if (b % 2 == 1) 
			{ b--;
			if (b % 10 == 0)
				{ b = b / 10;
			} else 
				{ cout << "NO" << endl;
				return 0;
			}
		}
	}
	sort(v.begin(), v.end());
	cout << "YES" << endl << jum << endl;
	for (int i = 0; i < jum; i++) 
		{ cout << v[i];
		if (i < jum - 1)
			{ cout << " ";
		} else
			{ cout << endl ;
	} }
}
