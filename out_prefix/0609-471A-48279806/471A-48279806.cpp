#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int A[6];
	for (int i = 0; i < 6; ++i) { cin >> A[i]; }
	sort(A, A + 6);
	int B, C;
	if (A[0] == A[3])
		{ B = A[4], C = A[5];
	} else if (A[1] == A[4])
		{ B = A[0], C = A[5];
	} else if (A[2] == A[5])
		{ B = A[0], C = A[1];
	} else 
		{ cout << "Alien" << endl;
		return 0;
	}
	if (B == C) 
		{ cout << "Elephant" << endl;
		return 0;
	}
	if (B < C) 
		{ cout << "Bear" << endl ;

		return 0;
	}
}
