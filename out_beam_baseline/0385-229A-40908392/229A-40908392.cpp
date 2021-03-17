#include <bits/stdc++.h>

using namespace std;

const int maxn = 11000;
int INF = 1 << 30;
int m, n;
int da[110][maxn];
int joo[110][maxn];
int main() 
	{ cin >> m >> n;
	string s;
	for (int i = 0; i < m; i++) 
		{ cin >> s;
		for (int j = 0; j < n; j++) da[i][j] = (s[j] == '1' ? 1 : 0);
	}
	int t, jj;
	for (int i = 0; i < m; i++) 
		{ t = INF;
		for (int j = 0; j < n * 2; j++) 
			{ jj = j % n;
			if (da[i][jj] == 1) t = 0;
			joo[i][jj] = t++;
		}
		t = INF;
		for (int j = n * 2; j >= 0; j--) 
			{ jj = j % n;
			if (da[i][jj] == 1) t = 0;
			joo[i][jj] = min(joo[i][jj], t++);
		}
	}
	long long mi = INF, sum;
	for (int j = 0; j < n; j++) 
		{ sum = 0;
		for (int i = 0; i < m; i++) { sum += joo[i][j]; }
		mi = min(sum, mi);
	}
	if (mi >= INF)
		{ cout << -1 << endl;
	} else
		{ cout << mi << endl ;
	} return 0;
}
