#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int N, B, P;
	cin >> N >> B >> P;
	int Ile = 0;
	int Reczniki = N * P;
	while (N > 1) 
		{ int Potega = 1;
		while (Potega * 2 <= N) { Potega *= 2; }
		int IleMeczy = Potega / 2;
		Ile += IleMeczy * 2 * B + IleMeczy;
		N = (N - Potega) + IleMeczy;
	}
	cout << Ile << " " << Reczniki << "\n" ;

}
