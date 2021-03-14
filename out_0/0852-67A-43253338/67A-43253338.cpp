#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	vector<int> T(1001, 1);
	vector<char> rla;
	cin >> n;
	for (int i = 0; i < n - 1; i++) 
		{ char c;
		cin >> c;
		rla.push_back(c);
	}
	for (int i = 0; i < n - 1; i++) 
		{ if (rla[i] == 'R') 
			{ T[i + 1] = max(T[i + 1], T[i] + 1);
		}  else if (rla[i] == '=') 
			{ T[i + 1] = T[i];
		}
	}
	for (int i = n - 2; i >= 0; i--) 
		{ if (rla[i] == 'L') 
			{ T[i] = max(T[i], T[i + 1] + 1);
		}  else if (rla[i] == '=') 
			{ T[i] = T[i + 1];
		}
	}
	for (int i = 0; i < n; i++) { cout << T[i] << " \n"[i == n - 1]; }
	cout << flush << endl ;

	return 0;
}
