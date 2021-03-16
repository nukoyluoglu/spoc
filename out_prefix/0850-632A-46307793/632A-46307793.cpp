#include <bits/stdc++.h>

using namespace std;

int N;
long long P;
string S[2000010];
int main() 
	{ cin >> N >> P;
	for (int i = 1; i <= N; i++) { cin >> S[i]; }
	long double fans = 0;
	for (int i = N; i >= 1; i--) 
		{ if (S[i] == "halfplus") 
			{ fans += 0.5;
			fans *= 2.00000000;
		}  else 
			{ fans *= 2.00000000;
		}
	}
	long double cost = 0;
	for (int i = 1; i <= N; i++) 
		{ cost += (fans / 2.00000) * (P);
		if (S[i] == "half") 
			{ fans /= 2.000;
		}  else 
			{ fans /= 2.000;
			fans -= 0.500;
		}
	}
	cout. precision ( 0 ) ;

	return 0;
}
