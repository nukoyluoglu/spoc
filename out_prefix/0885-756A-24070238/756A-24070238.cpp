#include <bits/stdc++.h>

using namespace std;

static long long n, m, k;
int main() 
	{ int n;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++) cin >> p[i];
	int res = 0;
	for (int i = 0; i < n; i++) 
		{ int x;
		cin >> x;
		res += x;
	}
	res = (res + 1) % 2;
	vector<bool> visited(n);
	int count = -1;
	for (int i = 0; i < n; i++) 
		{ if (visited[i]) continue;
		count++;
		int j = i;
		while (!visited[j]) 
			{ visited[j] = true;
			j = p[j] - 1;
		}
	}
	if (count > 0) res++;
	res += count;
	cout << res << endl ;

}
