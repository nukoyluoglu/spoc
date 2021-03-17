#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	int cont = 0;
	int sumador = 1;
	int i = 1;
	while (n > 0 && n >= sumador) 
		{ n = n - sumador;
		cont++;
		i++;
		sumador = sumador + i;
	}
	cout << cont << "\n" ;
	return 0;
}
