#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; i++) { cin >> A[i]; }
	int ansf = 1;
	int j = 0;
	int ch = 0;
	int max1 = 1;
	int x = 0;
	int dp[n] = {0};
	for (int i = 1; i < n; i++) 
		{ if (A[i] > A[i - 1]) 
			{ dp[i] = dp[i - 1] + 1;
		}  else 
			{ dp[i] = 0;
		}
	}
	for (int i = 1; i < n; i++) 
		{ if (A[i] > A[i - 1]) 
			{ ansf++;
		}  else 
			{ if (ch == 0) 
				{ x = A[i];
				A[i] = A[i - 1] + 1;
				j = i;
				ch = 1;
				ansf++;
			}  else 
				{ ansf = i - j;
				A[j] = x;
				if (ansf == 1) 
					{ if (A[i] > A[i - 1]) 
						{ ansf++;
						x = A[i - 2];
						ansf++;
						j = i - 2;
						A[i - 2] = A[i - 1] - 1;
						if (i >= 3 && A[i - 2] > A[i - 3]) ansf = ansf + dp[i - 2];
					}  else 
						{ ansf++;
						x = A[i - 1];
						j = i - 1;
						A[i - 1] = A[i] - 1;
						if (A[i - 1] > A[i - 2]) ansf = ansf + dp[i - 1];
					}
				}  else 
					{ if (A[j] < A[j + 1]) ansf++;
					x = A[i];
					j = i;
					A[i] = A[i - 1] + 1;
				}
			}
		}
		max1 = max(max1, ansf);
	}
	cout << max1 << "\n" ;

	return 0;
}
