#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, d, dist[105], s;
	cin >> n;
	s = n;
	memset(dist, 0, sizeof(dist));
	for (int i = 1; i <= n; i++) 
		{ for (int j = 1; j <= n; j++) 
			{ cin >> d;
			if (d == 1) dist[i]++;
			if (d == 2) dist[j]++;
			if (d == 3) 
				{ dist[i]++;
				dist[j]++;
			}
		}
	}
	for (int i = 0; i <= n; i++) 
		{ if (dist[i] != 0) s--;
	}
	cout << s << endl;
	int flot = 1;
	for (int i = 1; i <= n; i++) 
		{ if (dist[i] == 0 && flot) 
			{ cout << i;
			flot = 0;
		}  else if (dist[i] == 0 && !flot)
			{ cout << " " << i;
	} }
	if ( s ) cout << endl ;
	return 0;
}
