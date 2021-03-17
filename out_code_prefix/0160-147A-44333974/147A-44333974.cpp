#include <bits/stdc++.h>

using namespace std;

void File() 
	{ freopen("output.txt", "w", stdout);
	freopen("input.txt", "r", stdin);
}
void fast() {}
const double pi = 2 * acos(0.0);
const int nn = 1e5 + 4;
const int oo = 0x3f3f3f3f;
long long nCr(long long n, long long r) 
	{ if (n < r) return 0;
	if (r == 0) return 1;
	return n * nCr(n - 1, r - 1) / r;
}
long long gcd(long long a, long long b) 
	{ if (b == 0) return a;
	return gcd(b, a % b);
}
int main() 
	{ fast();
	string s;
	getline(cin, s);
	vector<char> arr;
	if (s[0] >= 'a' && s[0] <= 'z') arr.push_back(s[0]);
	for (int i = 1; i < ((int)((s).size())); i++) 
		{ if (s[i] >= 'a' && s[i] <= 'z') 
			{ if (s[i - 1] >= 'a' && s[i - 1] <= 'z')
				{ arr.push_back(s[i]);
			} else
				{ arr.push_back(' '), arr.push_back(s[i]);
		} }  else if (s[i] == ' ')
			{ continue;
		} else
			{ arr.push_back(s[i]);
	} }
	for (int i = 0; i < ((int)((arr).size())); i++) cout << arr[i];
	cout << endl ;

	return 0;
}
