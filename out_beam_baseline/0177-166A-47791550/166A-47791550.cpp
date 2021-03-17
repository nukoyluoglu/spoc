#include <bits/stdc++.h>

using namespace std;

int mod = (1e9) + 7;
int n;
const int N = 50;
int p[N], t[N];
bool compare(int a, int b) 
	{ if (p[a] > p[b]) return 1;
	if (p[a] == p[b] && t[a] <= t[b]) return 1;
	return 0;
}
bool eq(int a, int b) 
	{ if (p[a] == p[b] && t[a] == t[b]) return 1;
	return 0;
}
int main() 
	{ int k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) 
		{ cin >> p[i] >> t[i];
		a[i] = i;
	}
	stable_sort(a, a + n, compare);
	int c = 1;
	int i = k - 2;
	while (i >= 0 && eq(a[k - 1], a[i])) 
		{ c++;
		i--;
	}
	i = k;
	while (i < n && eq(a[k - 1], a[i])) 
		{ c++;
		i++;
	}
	cout << c << endl ;
}
