#include <bits/stdc++.h>

using namespace std;

int arr[10005];
int main() 
	{ int n;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> arr[i + 1]; }
	int s, t;
	cin >> s >> t;
	if (s > t) { swap(s, t); }
	int aa = 0;
	for (int i = s; i < t; i++) { aa += arr[i]; }
	int bb = 0;
	for (int i = 1; i < s; i++) { bb += arr[i]; }
	for (int i = t; i <= n; i++) { bb += arr[i]; }
	cout << min ( aa, bb ) << endl ;
}
