#include <bits/stdc++.h>

using namespace std;

long long int llin() 
	{ long long int tmp;
	cin >> tmp;
	return tmp;
}
void solve() 
	{ long long int nsticks = llin();
	long long int lengths[nsticks];
	long long int min = 101;
	long long int max = 0;
	for (long long int i = 0; i < nsticks; i++) 
		{ long long int tmp = llin();
		lengths[i] = tmp;
		if (tmp > max) max = tmp;
		if (tmp < min) min = tmp;
	}
	long long int min_t = min;
	long long int min_cost = 1000005;
	for (long long int t = min; t < max + 1; t++) 
		{ long long int tmp_cost = 0;
		for (long long int i = 0; i < nsticks; i++) 
			{ long long int tmp_length = lengths[i];
			if (tmp_length > t + 1)
				{ tmp_cost += tmp_length - (t + 1);
			} else if (tmp_length < t - 1)
				{ tmp_cost += t - 1 - (tmp_length);
		} }
		if (min_cost > tmp_cost) 
			{ min_t = t;
			min_cost = tmp_cost;
		}
	}
	cout << min_t << " " << min_cost << '\n';
	return;
}
int main() 
	{ int TESTS = 1;
	while ( TESTS -- ) { solve ( ) ; }

	return 0;
}
