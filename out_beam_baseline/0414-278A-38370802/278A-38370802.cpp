#include <bits/stdc++.h>

using namespace std;

int arr[1000];
int main() 
	{ int n;
	while (cin >> n) 
		{ int total = 0;
		memset(arr, 0, sizeof(arr));
		for (int i = 0; i < n; i++) 
			{ cin >> arr[i];
			total += arr[i];
		}
		int s, t;
		cin >> s >> t;
		int tmp;
		if (s > t) 
			{ tmp = s;
			s = t;
			t = tmp;
		}
		s--;
		t--;
		int a1 = 0, a2 = 0;
		for (int i = s; i < t; i++) { a1 += arr[i]; }
		a2 = total - a1;
		cout << min ( a2, a1 ) << endl ;
	}
}
