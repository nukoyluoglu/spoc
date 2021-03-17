#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, dx;
	cin >> n >> dx;
	string a[1001], b[1001], c[1001], d[1001];
	int t[1001];
	int sum = 0;
	for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> t[i];
	for (int i = 0; i < n - 1; i++)
		{ for (int j = i + 1; j < n; j++)
			{ if (t[j] - t[i] > 0 && t[j] - t[i] <= dx)
				{ if (a[i] == b[j] && b[i] == a[j]) 
					{ int flat = 0;
					for (int k = 0; k < sum; k++)
						{ if (a[i] == c[k] && b[i] == d[k] || a[i] == d[k] && b[i] == c[k]) 
							{ flat = 1;
							break;
						}
					} if (!flat) 
						{ c[sum] = a[i];
						d[sum] = b[i];
						sum++;
					}
				}
	} } } cout << sum << endl;
	for ( long long i = 0 ; i < sum ; ++ i ) { cout << c [ i ] << " " << d [ 1 ] << endl ; } ;

}
