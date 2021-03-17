#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e3 + 5;
int arr[maxn];
int stc[maxn];
int main() 
	{ int n, top;
	while (cin >> n) 
		{ top = 0;
		for (int i = 0; i < n; ++i) { cin >> arr[i]; }
		int i;
		for (i = 0; i < n - 1; ++i) 
			{ if (arr[i + 1] == 1) { stc[top++] = arr[i]; }
		}
		stc[top++] = arr[i];
		cout << top << endl << stc[0];
		for (int i = 1; i < top; ++i) { cout << " " << stc[i]; }
		cout << endl ;
	}
	return 0;
}
