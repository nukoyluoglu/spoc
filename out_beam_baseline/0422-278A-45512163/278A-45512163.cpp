#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n;
	cin >> n;
	long long int d[n];
	for (int i = 0; i < n; i++) { cin >> d[i]; }
	long long int s, t;
	cin >> s >> t;
	if (s > t) 
		{ long long int temp = s;
		s = t;
		t = temp;
	}
	long long int dist1 = 0, dist2 = 0;
	for (int i = s - 1; i < t - 1; i++) { dist1 += d[i]; }
	bool flag = true;
	for (int i = t - 1; i != s - 1; i++) 
		{ if (i % n == 0 && flag) 
			{ i = -1;
			flag = false;
			continue;
		}
		dist2 += d[i];
	}
	if (dist2 > dist1)
		{ cout << dist1 << endl;
	} else
		{ cout << dist2 << endl ;
	} return 0;
}
