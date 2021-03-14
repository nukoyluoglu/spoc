#include <bits/stdc++.h>

using namespace std;

int N, B, P;
int qplays;
int qplayers;
int qoutplayers;
int tplays;
int tplayers;
void calc(int n) 
	{ int k = 1;
	while (k < n) k <<= 1;
	if (k > n) k >>= 1;
	qplays = k - 1;
	qoutplayers = n - k;
	qplayers = 0;
	while (k >= 1) 
		{ qplayers += k;
		k >>= 1;
	}
	--qplayers;
}
int main() 
	{ cin >> N >> B >> P;
	tplays = 0;
	tplayers = 0;
	qoutplayers = 0;
	int n = N;
	do 
		{ calc(n);
		tplayers += qplayers;
		tplays += qplays;
		n = 1 + qoutplayers;
	}  while (qoutplayers > 0);
	cout << ( ( tplayers * B ) + tplays ) << N * P << endl ;

	return 0;
}
