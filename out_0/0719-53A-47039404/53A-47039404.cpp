#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	int n;
	cin >> s >> n;
	vector<string> v(n + 1);
	for (int i = 0; i < n; i++) { cin >> v[i]; }
	v[n] = s;
	sort(v.begin(), v.end());
	for (int i = 0; i <= n; i++) 
		{ if (v[i] == s) 
			{ if (i < n && v[i] == v[i + 1].substr(0, (int)v[i].size())) 
				{ cout << v[i + 1] << endl;
				break;
			}  else 
				{ cout << v[i] << endl;
				break ;

			}
		}
	}
	return 0;
}
