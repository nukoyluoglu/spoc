#include <bits/stdc++.h>

using namespace std;

int inum(int *a, int k, int i) 
	{ for (int l = 1; l < k; l++) 
		{ if (a[l - 1] != -1) 
			{ a[l] = a[l - 1] + (l + 1);
		}  else 
			{ a[l] = inum(a, l, i) + l + 1;
		}
	}
	return *(a + (k - 1));
}
int isum(int i) 
	{ int arr[i], a[i];
	arr[i] = {-1};
	a[i] = {-1};
	a[0] = 1;
	arr[0] = 1;
	if (i == 1) 
		{ return i;
	}  else 
		{ int j = 1;
		for (j; j < i; j++) 
			{ if (arr[j - 1] != -1) 
				{ arr[j] = arr[j - 1] + inum(a, j + 1, i);
			}  else 
				{ arr[j] = isum(j) + (j + 1);
			}
		}
	}
	return *(arr + (i - 1));
}
int main() 
	{ int n, i = 1;
	cin >> n;
	while (isum(i) <= n) { i++; }
	cout << i - 1 << endl ;

	return 0;
}
