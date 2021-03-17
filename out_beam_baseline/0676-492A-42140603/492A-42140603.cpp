#include <bits/stdc++.h>

using namespace std;

long long cum[100 + 2];
int main() 
	{ for (int i = 1; i <= 100; i++) cum[i] = i;
	for (int i = 2; i <= 100; i++) { cum[i] += cum[i - 1]; }
	int n;
	cin >> n;
	long long sum = 0;
	int Count = 0;
	int i;
	for (i = 1; sum <= n; i++) 
		{ sum += cum[i];
		if (sum > n)
			{ break;
		} else
			{ Count++;
	} }
	cout << Count << endl ;
}
