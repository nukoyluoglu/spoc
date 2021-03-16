#include <bits/stdc++.h>

using namespace std;

double x[100000], y[100000];
int n, t;
void sorty() 
	{ int i, k;
	for (i = 0; i < n; i++) 
		{ int min = x[i];
		int pos = i;
		for (k = i + 1; k < n; k++) 
			{ if (x[k] < min) 
				{ min = x[k];
				pos = k;
			}
		}
		swap(x[i], x[pos]);
		swap(y[i], y[pos]);
	}
}
int main() 
	{ cin >> n >> t;
	int i;
	for (i = 0; i < n; i++) 
		{ double a, b;
		cin >> a >> b;
		x[i] = (a - (b / 2.0));
		y[i] = (a + (b / 2.0));
	}
	sorty();
	int ct = 2;
	for (i = 0; i < n - 1; i++) 
		{ double h = y[i] + t;
		if (x[i + 1] >= h) { ct++; }
		h = x[i + 1] - t;
		if (y[i] < h) { ct++; }
	}
	cout << ct << endl ;

}
