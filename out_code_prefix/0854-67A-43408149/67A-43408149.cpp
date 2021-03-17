#include <bits/stdc++.h>

using namespace std;

long long int n;
int answer[2000];
int main() 
	{ cin >> n;
	int small = 1;
	char s[n];
	for (int i = 0; i < n - 1; i++) cin >> s[i];
	for (int i = 0; i < n; i++) answer[i] = 1;
	for (int i = n - 2; i >= 0; i--) 
		{ if (s[i] == 'L')
			{ answer[i] = answer[i + 1] + 1;
		} else if (s[i] == '=')
			{ answer[i] = answer[i + 1];
	} }
	for (int i = 0; i < n - 1; i++) 
		{ if (s[i] == 'R' && answer[i] >= answer[i + 1])
			{ answer[i + 1] = answer[i] + 1;
		} else if (s[i] == '=')
			{ answer[i + 1] = answer[i];
	} }
	for ( int i = 0 ; i < n ; i ++ ) { cout << answer [ i ] ; }

}
