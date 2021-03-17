#include <bits/stdc++.h>

using namespace std;

int s[10], a, b, n;
int main() 
	{ for (int i = 0; i < 6; i++) 
		{ cin >> n;
		s[n]++;
	}
	for (int i = 0; i < 10; i++) 
		{ if (s[i] >= 4) { b = 1; }
		if (s[i] == 2 || s[i] == 6) { a = 1; }
	}
	if (b == 0) 
		{ cout << "Alien" << endl;
	}  else if (a == 1) 
		{ cout << "Elephant" << endl;
	}  else 
		{ cout << "Bear" << endl ;
	}
}
