#include <bits/stdc++.h>

using namespace std;

bool es_primo(int n) 
	{ if (n < 4) return true;
	for (int i = 2; i * i <= n; i++) 
		{ if (n % i == 0) return false;
	}
	return true;
}
int sum_digitos(int n) 
	{ int sum = 0;
	while (n > 0) 
		{ sum += n % 10;
		n /= 10;
	}
	return sum;
}
int sum_factores(int n) 
	{ int sum = 0;
	for (int i = 2; i * i <= n; i++) 
		{ while (n % i == 0) 
			{ sum += sum_digitos(i);
			n /= i;
		}
	}
	if (n > 1) { sum += sum_digitos(n); }
	return sum;
}
int busca_sig(int n) 
	{ do { n++; } while (es_primo(n) || sum_digitos(n) != sum_factores(n));
	return n;
}
int main() 
	{ int n;
	cin >> n;
	int act = 0;
	for (int i = 1; i <= n; i++) { act = busca_sig(act); }
	cout << act << endl ;

	return 0;
}
