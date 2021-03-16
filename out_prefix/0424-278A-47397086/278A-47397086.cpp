#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, s, t, sum = 0, m1 = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) 
		{ cin >> arr[i];
		sum += arr[i];
	}
	cin >> s >> t;
	s--;
	t--;
	int l = min(s, t);
	int h = max(s, t);
	for (int i = l; i < h; i++) { m1 += arr[i]; }
	cout << min ( m1, sum - m1 ) << endl ;

}
