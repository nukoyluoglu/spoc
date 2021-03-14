#include <bits/stdc++.h>

using namespace std;

int arr[] = {4, 7, 44, 77, 47, 74, 444, 447, 474, 477, 777, 744, 747, 774};
bool s = false;
int main() 
	{ int n;
	cin >> n;
	for (int i = 0; i < 14; ++i) 
		{ if (n % arr[i] == 0) 
			{ cout << "YES" << endl;
			s = true;
			break;
		}  else
			{ continue;
	} }
	if (! s ) cout << "NO" << endl ;

	return 0;
}
