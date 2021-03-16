#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, agua, toalha = 0;
	cin >> n >> agua >> toalha;
	int nrod, tagua, ttoalha = 0;
	nrod = n - 1;
	tagua = nrod + nrod * agua * 2;
	ttoalha = toalha * n;
	cout << tagua << " " << ttoalha << endl ;

	return 0;
}
