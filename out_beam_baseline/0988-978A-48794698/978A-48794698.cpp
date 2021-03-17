#include <bits/stdc++.h>

using namespace std;

int num[100];
int nn[100];
int cnt = 0;
int cc1 = 0;
bool num_find(int in) 
	{ for (int i = 0; i < cnt; i++) 
		{ if (num[i] == in) return true;
	}
	return false;
}
int main() 
	{ int N;
	cin >> N;
	for (int i = 0; i < N; i++) 
		{ cin >> nn[cc1];
		cc1++;
	}
	for (int i = N - 1; i >= 0; i--) 
		{ int tmp;
		tmp = nn[i];
		if (!num_find(tmp)) 
			{ num[cnt] = tmp;
			cnt++;
		}
	}
	cout << cnt << endl;
	for (int i = cnt - 1; i > 0; i--) cout << num[i] << " ";
	cout << num [ 0 ] << endl ;
}
