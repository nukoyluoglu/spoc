#include <bits/stdc++.h>

using namespace std;

vector<int> sol;
int main() 
	{ int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= 150; i++) 
		{ if (sum > n) 
			{ cout << i - 2 << endl;
			return 0;
		}
		sum += ( ( i * ( i + 1 ) ) / 2 ) ;

	}
}
