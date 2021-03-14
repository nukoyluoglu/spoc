#include <bits/stdc++.h>

using namespace std;

int n, arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
int main() 
	{ cin >> n;
	for (int i = 0; i < 10; i++) 
		{ if (!(n % arr[i])) 
			{ cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO\n" ;

	return 0;
}
