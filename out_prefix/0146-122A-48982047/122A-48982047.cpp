#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int num;
	int arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	cin >> num;
	for (int i = 0; i < 14; i++) 
		{ if (num % arr[i] == 0) 
			{ cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO\n" ;

	return 0;
}
