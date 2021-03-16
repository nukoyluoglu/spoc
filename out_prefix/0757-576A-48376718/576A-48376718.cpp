#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6;
int prime[maxn + 1];
void getPrime() 
	{ memset(prime, 0, sizeof(prime));
	for (int i = 2; i <= maxn; i++) 
		{ if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0] && prime[j] <= maxn / i; j++) 
			{ prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
}
int main() 
	{ getPrime();
	int n;
	while (cin >> n) 
		{ vector<int> v;
		v.clear();
		int key = prime[1], id = 1;
		for (int i = 1; prime[i] <= n; i++) 
			{ int key = prime[i];
			while (key <= n) 
				{ v.push_back(key);
				key *= prime[i];
			}
		}
		cout << v.size() << endl;
		for ( int i = 0 ; i < v. size ( ) ; i ++ ) { cout << v [ i ] << ( i == v. length ( ) - 1? "\n" : " " ) ; }

	}
}
