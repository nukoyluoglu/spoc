#include <bits/stdc++.h>

using namespace std;

int N;
int A;
int T;
int values[1001][1001];
int pagamento[1001];
int aguinha;
int strlen(char t[1001]) 
	{ int ret = 0;
	while (t[ret] != '\0') { ret++; }
	return ret;
}
int maxfunc(int t1, int t2) 
	{ int ret = t1;
	if (t2 > t1) { ret = t2; }
	return ret;
}
int minfunc(int t1, int t2) 
	{ int ret = t1;
	if (t2 < t1) { ret = t2; }
	return ret;
}
int epar(int x) 
	{ int ret = 0;
	if ((x % 2) == 0) { ret = 1; }
	return ret;
}
int atoifunc(char x) 
	{ return x - '0';
}
int main() 
	{ int result = 0;
	int size;
	N = 0;
	int N;
	int A;
	int T;
	cin >> N >> A >> T;
	aguinha = A * 2 + 1;
	int njogos = 0;
	int resta = N;
	while (resta != 1) 
		{ njogos += resta / 2;
		if (epar(resta)) 
			{ resta = (resta / 2);
		}  else 
			{ resta = (resta / 2) + 1;
		}
	}
	int njogos * aguinha, N * T ;

	return 0;
}
