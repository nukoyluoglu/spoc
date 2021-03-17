#include <bits/stdc++.h>

using namespace std;

const int maxn = 1010;
vector<int> v;
bool is_prime[maxn];
int prime[maxn];
int k;
void Euler(int n) 
	{ int i, j;
	k = 0;
	for (i = 2; i < n; i++) 
		{ if (is_prime[i] == false) prime[k++] = i;
		for (j = 0; j < k && i * prime[j] < n; j++) 
			{ is_prime[i * prime[j]] = true;
			if (i % prime[j] == 0) break;
		}
	}
}
int main() 
	{ int n, x;
	Euler(maxn);
	int ans(0);
	cin >> n;
	for (int i = 0; i < k; i++) 
		{ if (prime[i] <= n) 
			{ int p = prime[i];
			while (p <= n) 
				{ v.push_back(p);
				p *= prime[i];
			}
		}
	}
	cout << v.size() << endl;
	if (v.size() > 0) 
		{ for (int i = 0; i < v.size() - 1; i++) cout << v[i] << ' ';
		cout << v [ v. size ( ) - 1 ] << endl ;
	}
	return 0;
}
