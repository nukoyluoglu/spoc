#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	if (n % 2 == 1)
		{ cout << -1 << endl;
	} else 
		{ int temp = 2;
		int count = 0;
		while (temp != n - 1) 
			{ cout << temp << " ";
			count++;
			if (count % 2 == 1)
				{ temp -= 1;
			} else
				{ temp += 3;
		} }
		cout << temp << endl ;
	}
}
