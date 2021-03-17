#include <bits/stdc++.h>

using namespace std;

int n = 6, res, a[10];
int main() 
	{ for (int i = 1; i <= n; i++) cin >> a[i];
	int root = a[1] * 2 + 1, curr = root;
	int first_layer = 0, second_layer = 0, third_layer = 0;
	if (a[2] >= a[n])
		{ first_layer = a[n], second_layer = a[2] - a[n];
	} else
		{ first_layer = a[2], second_layer = a[n] - a[2];
	} for (int i = 1; i <= first_layer; i++) 
		{ res = res + curr;
		curr = curr + 2;
	}
	if (first_layer == a[2])
		{ second_layer = min(second_layer, a[3]);
	} else
		{ second_layer = min(second_layer, a[5]);
	} for (int i = 1; i <= second_layer; i++) res = res + curr - 1;
	root = a[4] * 2 + 1, curr = root;
	for (int i = 1; i <= min(a[3], a[5]); i++) 
		{ res = res + curr;
		curr = curr + 2;
	}
	cout << res <<'\n';

	return 0;
}
