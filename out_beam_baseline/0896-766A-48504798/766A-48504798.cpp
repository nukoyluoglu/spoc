#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string A;
	cin >> A;
	string B;
	cin >> B;
	if (A == B) 
		{ cout << -1 << "\n";
		return 0;
	}
	cout << max ( A. size ( ), B.size ( ) ) << endl ;
	return 0;
}
