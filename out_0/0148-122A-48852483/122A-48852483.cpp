#include <bits/stdc++.h>

using namespace std;

int n;
int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477};
int main() 
	{ cin >> n;
	for (int i = 0; i < sizeof(arr) / 4; i++)
		{ if (!(n % arr[i])) 
			{ cout << "YES\n";
			exit(0);
		}
	} cout << "NO\n" ;

	return 0;
}
