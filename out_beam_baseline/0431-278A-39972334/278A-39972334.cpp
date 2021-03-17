#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, arr[100], s, t;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	cin >> s >> t;
	int m1 = min(s, t);
	int m2 = max(s, t);
	m1--;
	m2--;
	int R1 = 0, R2 = 0;
	for (int i = m1; i < m2; i++) R1 += arr[i];
	for (int i = m2; i < n; i++) R2 += arr[i];
	for (int i = 0; i < m1; i++) R2 += arr[i];
	int R = min(R2, R1);
	cout << R << endl ;
	return 0;
}
