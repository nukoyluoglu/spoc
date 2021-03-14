#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int a = 0, tam = 0, comeco = 0, fim = 0;
	cin >> a >> tam;
	bool isThere[tam + 1];
	for (int j = 0; j <= tam; j++) { isThere[j] = false; }
	for (int b = 0; b < a; b++) 
		{ cin >> comeco >> fim;
		for (int c = comeco; c <= fim; c++) { isThere[c] = true; }
	}
	int resp = 0;
	int presentes[tam + 1];
	string ordem = "";
	for (int b = 1; b <= tam; b++) 
		{ if (!isThere[b]) 
			{ presentes[resp] = b;
			resp++;
		}
	}
	cout << resp << endl;
	for (int b = 0; b < resp; b++) 
		{ cout << presentes[b];
		if (b == resp - 1) 
			{ cout << endl;
		}  else 
			{ cout << " " ;

		}
	}
	return 0;
}
