#include <bits/stdc++.h>

using namespace std;

int compare(const void *x1, const void *x2) 
	{ return (*(int *)x1 - *(int *)x2);
}
int main() 
	{ int N;
	int final;
	cin >> N;
	int massiv[N];
	int d;
	int R;
	for (R = 0; R < N; R++) 
		{ cin >> d;
		massiv[R] = d;
	}
	qsort(massiv, N, sizeof(int), compare);
	if (N % 2 == 0) 
		{ final = massiv[R / 2 - 1];
	}  else 
		{ final = massiv[R / 2];
	}
	cout << final << endl ;

}
