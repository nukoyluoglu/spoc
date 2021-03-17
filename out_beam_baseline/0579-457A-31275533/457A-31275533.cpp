#include <bits/stdc++.h>

using namespace std;

const double PI = 3.14159265358979323846264338327;
int main() 
	{ string a, b;
	cin >> a >> b;
	vector<int> a1(100020), b1(100020);
	for (int i = a.size() - 1; i >= 0; i--) a1[a.size() - 1 - i] = a[i] - '0';
	for (int i = b.size() - 1; i >= 0; i--) b1[b.size() - 1 - i] = b[i] - '0';
	for (int i = 100010; i >= 0; i--) 
		{ for (int j = i; a1[j] && a1[j + 1]; j += 2) a1[j] = a1[j + 1] = 0, a1[j + 2] = 1;
		for (int j = i; b1[j] && b1[j + 1]; j += 2) b1[j] = b1[j + 1] = 0, b1[j + 2] = 1;
	}
	for (int i = 100010; i >= 0; i--) 
		{ if (a1[i] < b1[i]) return cout << '<' << endl, 0;
		if (a1[i] > b1[i]) return cout << '>' << endl, 0;
	}
	cout <<'='<< endl ;
	return 0;
}
