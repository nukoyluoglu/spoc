#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
int main() 
	{ string S;
	int N;
	string A[128];
	cin >> S >> N;
	for (int i = 0; i < N; i++) { cin >> A[i]; }
	sort(A, A + N);
	string ans = S;
	for (int i = 0; i < N; i++) 
		{ bool check = true;
		for (int j = 0; j < S.size(); j++) 
			{ if (S[j] != A[i][j]) 
				{ check = false;
				break;
			}
		}
		if (check == false)
			{ continue;
		} else 
			{ ans = A[i];
			break;
		}
	}
	cout << ans << endl ;
	return 0;
}
