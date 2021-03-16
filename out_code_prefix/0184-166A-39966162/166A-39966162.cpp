#include <bits/stdc++.h>

using namespace std;

int a[100][100];
void margesort(int p[], int t[], int l, int r);
void marge(int p[], int t[], int l, int m, int r);
int main() 
	{ int n, k, p[100], t[100];
	cin >> n >> k;
	for (int i = 0; i < n; i++) 
		{ cin >> p[i] >> t[i];
		a[p[i]][t[i]]++;
	}
	margesort(p, t, 0, n - 1);
	cout << a[p[k - 1]][t[k - 1]] << endl;
	return 0;
}
void margesort(int p[], int t[], int l, int r) 
	{ if (l < r) 
		{ int m = (l + r - 1) / 2;
		margesort(p, t, l, m);
		margesort(p, t, m + 1, r);
		marge(p, t, l, m, r);
	}
}
void marge(int p[], int t[], int l, int m, int r) 
	{ int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2], ll[n1], rr[n2];
	for (i = 0; i < n1; i++) 
		{ L[i] = p[l + i];
		ll[i] = t[l + i];
	}
	for (j = 0; j < n2; j++) 
		{ R[j] = p[m + 1 + j];
		rr[j] = t[m + 1 + j];
	}
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) 
		{ if (L[i] > R[j]) 
			{ p[k] = L[i];
			t[k] = ll[i];
			i++;
		}  else if (L[i] == R[j] && ll[i] <= rr[j]) 
			{ p[k] = L[i];
			t[k] = ll[i];
			i++;
		}  else 
			{ p[k] = R[j];
			t[k] = rr[j];
			j++;
		}
		k++;
	}
	while (i < n1) 
		{ p[k] = L[i];
		t[k] = ll[i];
		i++;
		k++;
	}
	while (j < n2) 
		{ p[k] = R[j];
		t[k] = rr[j];
		j++;
		k ++ ;

	}
}
