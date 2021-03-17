#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2) 
		{ cout << "-1\n";
	}  else 
		{ cout << max ( ( int ) s1. size ( ), ( ( long long ) s2.size ( ) ) ) << "\n" ;

	}
	return 0;
}
