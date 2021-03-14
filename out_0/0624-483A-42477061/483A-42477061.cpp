#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int a, b;
	cin >> a >> b;
	if (a % 2 == 0 && a + 2 <= b) 
		{ cout << a << " " << a + 1 << " " << a + 2 << endl;
	}  else if (a % 2 != 0 && a + 3 <= b) 
		{ cout << a + 1 << " " << a + 2 << " " << a + 3 << endl;
	}  else 
		{ cout << - 1 << endl ;

	}
	return 0;
}
