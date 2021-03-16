#include <bits/stdc++.h>

using namespace std;

int n;
int A[60];
int sum;
int B[60];
int main() 
	{ cin >> n;
	sum = n;
	int t = 0;
	for (int i = 0; i < n; i++) { cin >> A[i]; }
	for (int i = 0; i < n; i++) 
		{ for (int x = i + 1; x < n; x++) 
			{ if (A[i] == A[x]) 
				{ A[i] = 0;
				B[t] = i;
				t++;
				break;
			}
		}
	}
	for (int i = t - 1; i >= 0; i--) 
		{ sum--;
		for (int x = B[i]; x < n; x++) 
			{ A[x] = A[x + 1];
			A[x + 1] = 0;
		}
	}
	cout << sum << endl;
	for (int i = 0; i < sum; i++) 
		{ cout << A[i];
		if (i != sum - 1) { cout << " "; }
	}
	<< "\n" ;

}
