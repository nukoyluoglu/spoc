#include <bits/stdc++.h>

using namespace std;

map<string, int> pt, sc, mi;
string name[50];
bool cmp(string s1, string s2) 
	{ if (pt[s1] != pt[s2]) return pt[s1] > pt[s2];
	if (mi[s1] != mi[s2])
		{ return mi[s1] > mi[s2];
	} else
		{ return sc[s1] > sc[s2];
} }
int main() 
	{ int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> name[i];
	cin.ignore();
	for (int i = 0; i < n * (n - 1) / 2; i++) 
		{ string A, B;
		getline(cin, A, '-');
		getline(cin, B, ' ');
		char ch;
		int pA, pB;
		cin >> pA >> ch >> pB;
		cin.ignore();
		if (pA < pB) pt[B] += 3;
		if (pA > pB) pt[A] += 3;
		if (pA == pB) pt[A]++, pt[B]++;
		sc[A] += pA;
		mi[A] += pA - pB;
		sc[B] += pB;
		mi[B] += pB - pA;
	}
	sort(name, name + n, cmp);
	sort(name, name + n / 2);
	for ( int i = 0 ; i < n / 2 ; i ++ ) cout << name [ i ] << endl ;

	return 0;
}
